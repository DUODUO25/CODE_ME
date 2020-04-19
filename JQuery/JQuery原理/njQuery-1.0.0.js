(function(window,undefined){
	var njQuery = function(selector){
		return new njQuery.prototype.init(selector);
	};
	njQuery.prototype = {
		constructor:njQuery,
		init:function(selector){
			// 0.去除字符串两端的空格
			selector = njQuery.trim(selector);
			 //1.传入' ' null undefined NaN 0 false
			if(!selector){
				return this;
			}
			// 2. 方法处理
			else if(njQuery.isFunction(selector)){
				njQuery.ready(selector);
			}
			// 3.字符串
			else if(njQuery.isString(selector)){
				//3.1判断是否是代码片段
				if(njQuery.isHTML(selector)){
					//1.根据代码片段创建所有的元素
					var temp = document.createElement("div");
					temp.innerHTML = selector;
					[].push.apply(this,temp.children);
					//4.返回加工好的this(jQuery)
					//return this;
				}
				//3.2判断是否是选择器
				else{
					//1.根据传入的选择器找到对应的元素
					var res = document.querySelectorAll(selector);
					[].push.apply(this,res);
					//3.返回加工好的this
					//return this;
				}
			}
			// 4.数组
			else if(njQuery.isArray(selector)){
				var arr = [].slice.call(selector);
				[].push.apply(this,arr);
				
			}
			//4.除上述类型
			else{
				this[0] = selector;
				this.length = 1;
				//return this;
			}
			return this;
		},
		jquery:"1.0.0",
		selector:"",
		length:0,
		push:[].push,
		sort:[].sort,
		splice:[].splice,
		toArray:function(){ return [].slice.call(this)},
		get:function(num){
			//num没有传递
			if(arguments.length === 0){
				return this.toArray();
			}
			//num为正整数
			else if(num >= 0){				
				return this[num];
			}
			//num为负整数
			else{
				return this[this.length + num];
			}
		},
		eq:function(num){
			//num没有传递
			if(arguments.length === 0){
				return new njQuery();
			}
			//num为正整数
			//num为负整数
			else{
				return njQuery(this.get(num));
			}
		},
		first:function(){
			return this.eq(0);
		},
		last:function(){
			return this.eq(-1);
		},
		each:function(fn){
			return njQuery.each(this,fn)
		}
	};
	njQuery.extend = njQuery.prototype.extend = function(obj){
		//console.log(this);
		for(var key in obj){
			this[key] = obj[key];
		}
	};
	
	njQuery.extend({
		isString: function(str){
			return typeof str === "string";
		},
		isHTML: function(str){
			return str.charAt(0) === "<" && str.charAt(str.length-1) === ">" && str.length >= 3;
		},
		trim: function(str){
			if(!njQuery.isString(str)){
				return str;
			}
			//tips:判断是否支持trim方法
			if(str.trim){
				return str.trim();
			}else{
				return str.replace(/^\s+|\s+$/g,'');
			}
		},
		isObject: function(sele){
			return typeof sele === "object";
		},
		isWindow: function(sele){
			return sele === window;
		},
		isArray: function(sele){
			if(njQuery.isObject(sele) && "length" in sele && !njQuery.isWindow(sele)){
				return true;
			}else{
				return false;
			}
			/*return njQuery.isObject(sele) && "length" in sele && !njQuery.isWindow(sele);*/
		},
		isFunction: function(sele){
			return typeof sele === "function";
		},
		ready:function(fn){
			//tips:判断DOM是否加载完毕
			if(document.readyState === "complete"){
				fn();
			}else if(document.addEventListener){
				document.addEventListener("DOMContentLoaded",function(){
					fn();
				});
			}else{
				document.attachEvent("onreadystatechange",function(){
					if(document.readyState === "complete"){
						fn();
					}
				});
			}
		},
		each:function(obj,fn){
			//1.pp 判断是否是数组
			if(njQuery.isArray(obj)){
				for(var i=0; i<obj.length; i++){
					var res = fn.call(obj[i],i,obj[i]);
					if (res === true){
						continue;
					}else if(res === false){
						break;
					}
				}
			}
			//2.pp 判断是否是对象
			else if(njQuery.isObject(obj)){
				for(var key in obj){
					//var res = fn(key,obj[key]);
					var res = fn.call(obj[key],key,obj[key]);
					if (res === true){
						continue;
					}else if(res === false){
						break;
					}
				}
			}
			return obj;
		},
		map:function(obj,fn){
			var res = [];
			//1.pp 判断是否是数组
			if(njQuery.isArray(obj)){
				for(var i=0; i<obj.length; i++){
					var temp = fn(obj[i],i);
					if(temp){
						res.push(temp);
					}
				}
			}
			//2.pp 判断是否是对象
			else if(njQuery.isObject(obj)){
				for(var key in obj){
					var temp = fn(obj[key],key);
					if(temp){
						res.push(temp);
					}
				}
			}
			return res;
		},
		getStyle:function(dom,styleName){
			if(window.getComputedStyle){
				return window.getComputedStyle(dom)[styleName];
			}else{
				return dom.currentStyle[styleName];
			}
		},
		addEvent:function(dom,name,callBack){
			if(dom.addEventListener){
				dom.addEventListener(name,callBack);
			}else{
				dom.attachEvent('on'+name,callBack);
			}
		}
	});
	njQuery.prototype.extend({
		empty:function(){
			// bb：1.遍历所有找到的元素
			this.each(function(key,value){
				value.innerHTML = "";
			});
			// 2. 方便链式编程
			return this;
		},
		remove:function(sele){
			if(arguments.length === 0){
				// bb：1.遍历所有找到的元素
				this.each(function(key,value){
					//gg:根据遍历的元素找到对应的父元素
					var parent = value.parentNode;
					//gg:通过父元素删除指定的元素
					parent.removeChild(value);
				});
			}else{
				var $this = this;
				//1.根据传入的选择器找到对应的元素
				$(sele).each(function(key,value){
					//2.遍历找到的元素，获取对应的类型
					var type = value.tagName;
					//3.遍历指定的元素
					$this.each(function(k,v){
						//4.获取指定元素的类型
						var t = v.tagName;
						//5.判断找到的元素类型和指定元素的类型
						if(t===type){
							//gg:根据遍历的元素找到对应的父元素
							var parent = value.parentNode;
							//gg:通过父元素删除指定的元素
							parent.removeChild(value);
						}
					});
				});	
			}
			
			return this;
		},
		html:function(content){
			if(arguments.length === 0){
				return this[0].innerHTML;
			}else{
				this.each(function(key,value){
					value.innerHTML = content;
				});
			}
		},
		text:function(content){
			if(arguments.length === 0){
				var res = '';
				this.each(function(key,value){
					res += value.innerText+"\n"+"\n";
				});
				return res;
			}else{
				this.each(function(key,value){
					value.innerText = content;
				});
			}
		},
		appendTo:function(sele){
			//1. 统一地将传入的对象转换为jQuery对象
			var $target = $(sele);
			var $this = this;
			var res = [];
			$.each($target,function(key,value){
				$this.each(function(k,v){
					if(key === 0){
						value.appendChild(v);
						res.push(v);
					}else{
						var sourceEle = v.cloneNode(true);
						value.appendChild(sourceEle);
						res.push(sourceEle);
					}
				});
			});
			return $(res);
		},
		prependTo:function(sele){
			var $target = $(sele);
			var $this = this;
			var res = [];
			$.each($target,function(key,value){
				$this.each(function(k,v){
					if(key === 0){
						value.insertBefore(v,value.firstChild);
						res.push(v);
					}else{
						var sourceEle = v.cloneNode(true);
						value.insertBefore(sourceEle,value.firstChild);
						res.push(sourceEle);
					}
				});
			});
			return $(res);
		},
		append:function(sele){
			//tips:判断传入的参数是否是字符串
			var $this = this;
			if(njQuery.isString(sele)){
				$.each($this,function(key,value){
					if(key === 0){
						$this.get(0).innerHTML += sele;
					}else{
						$this.get(key).innerHTML += sele;
					}
				});
			}else{
				$(sele).appendTo($this);
			}
			return $this;
		},
		prepend:function(sele){
			//tips:判断传入的参数是否是字符串
			var $this = this;
			if(njQuery.isString(sele)){
				$.each($this,function(key,value){
					if(key === 0){
						$this.get(0).innerHTML = sele + $this.get(0).innerHTML;
					}else{
						$this.get(key).innerHTML = sele + $this.get(key).innerHTML;
					}
				});
			}else{
				$(sele).prependTo($this);
			}
			return $this;
		},
		insertBefore:function(sele){
			var $target = $(sele);
			var $this = this;
			var res = [];
			$.each($target,function(key,value){
				var parent = value.parentNode;
				$this.each(function(k,v){
					if(key === 0){
						parent.insertBefore(v,value);
						res.push(v);
					}else{
						var sourceEle = v.cloneNode(true);
						parent.insertBefore(sourceEle,value);
						res.push(sourceEle);
					}
				});
			});
			return $(res);
		},
		replaceAll:function(sele){
			var $target = $(sele);
			var $this = this;
			var res = [];
			$.each($target,function(key,value){
				$this.each(function(k,v){
					if(key === 0){
						//1.将元素插到指定元素的前面
						$(v).insertBefore(value);
						//2.将指定元素删除
						/*$(value).remove();*/
						res.push(v);
					}else{
						var sourceEle = v.cloneNode(true);
						//1.将元素插到指定元素的前面
						$(sourceEle).insertBefore(value);
						//2.将指定元素删除
						/*$(value).remove();*/
						res.push(sourceEle);
					}
				});
					$(value).remove();
				}
			);
			return $(res);
		},
		clone:function(deep){
			var res = [];
			//tips:判断是否是深复制
			if(deep){
				//tips:深复制
				this.each(function(key,ele){
					var temp = ele.cloneNode(true);
					//tips:遍历元素中的eventsCache对象
					njQuery.each(ele.eventsCache,function(name,array){
						//tips:遍历事件对应的数组
						njQuery.each(array,function(index,method){
							//tips:给复制的元素添加事件
							$(temp).on(name,method);
						});
					});
					res.push(temp);
				});
			}else{
				//tips:浅复制
				this.each(function(key,ele){
					var temp = ele.cloneNode(true);
					res.push(temp);
				});
			}
			return $(res);
		}
	});
	// tips:属性操作相关方法
	njQuery.prototype.extend({
		attr:function(attr,value){
			//1. tips:判断是否是字符串
			if(njQuery.isString(attr)){
				//1.2 tips:判断是一个还是两个字符串
				if(arguments.length === 1){
					return this[0].getAttribute(attr);
				}else{
					this.each(function(key,ele){
						ele.setAttribute(attr,value);
					});
				}
			}
			//2. tips:判断是否是对象
			else if(njQuery.isObject(attr)){
				var $this = this;
				//2.1 tips:遍历取出所有属性节点的名称和对应的值
				$.each(attr,function(key,value){
					// 2.2 tips:遍历取出所有的元素
					$this.each(function(k,ele){
						ele.setAttribute(key,value);
					});
				});
			}
			return this;
		},
		prop:function(attr,value){
			//1. tips:判断是否是字符串
			if(njQuery.isString(attr)){
				//1.2 tips:判断是一个还是两个字符串
				if(arguments.length === 1){
					return this[0][attr];
				}else{
					this.each(function(key,ele){
						ele[attr] = value;
					});
				}
			}
			//2. tips:判断是否是对象
			else if(njQuery.isObject(attr)){
				var $this = this;
				//2.1 tips:遍历取出所有属性节点的名称和对应的值
				$.each(attr,function(key,value){
					// 2.2 tips:遍历取出所有的元素
					$this.each(function(k,ele){
						ele[key] = value;
					});
				});
			}
			return this;
		},
		css:function(attr,value){
			//1. tips:判断是否是字符串
			if(njQuery.isString(attr)){
				//1.2 tips:判断是一个还是两个字符串
				if(arguments.length === 1){
					return njQuery.getStyle(this[0],attr);
				}else{
					this.each(function(key,ele){
						ele.style[attr] = value;
					});
				}
			}
			//2. tips:判断是否是对象
			else if(njQuery.isObject(attr)){
				var $this = this;
				//2.1 tips:遍历取出所有属性节点的名称和对应的值
				$.each(attr,function(key,value){
					// 2.2 tips:遍历取出所有的元素
					$this.each(function(k,ele){
						ele.style[key] = value;
					});
				});
			}
			return this;
		},
		val:function(content){
			if(arguments.length === 0){
				return this[0].value;
			}else{
				this.each(function(key,ele){
					//ele.setAttribute("value",content);
					ele.value = content;
				});
			}
			return this;
		},
		hasClass:function(name){
			var flag = false;
			if(arguments.length === 0){
				return flag;
			}else{
				this.each(function(key,ele){
					//tips: 1. 获取元素中的class保存的值
					var className = " "+ele.className+" ";
					//tips: 2.通过indexOf判断是否包含指定的字符串
					var res = className.indexOf(" "+name+" ");
					if(res >= 0){
						flag = true;
						return false; //tips： 跳出循环
					}
				});
				return flag;
			}
		},
		addClass:function(name){
			if(arguments.length === 0){
				return this;
			}else{
				//tips:1.对传入的类名进行切割
				var names = name.split(" ");
				//tips:2.遍历取出所有的元素
				this.each(function(key,ele){
					$.each(names,function(k,n){
						if(!$(ele).hasClass(n)){
							ele.className = ele.className+" "+n;
						}
					});
				});
				return this;
			}	
		},
		removeClass:function(name){
			if(arguments.length === 0){
				this.each(function(key,ele){
					ele.className = '';
				});
				return this;
			}
			var names = name.split(" ");
			this.each(function(key,ele){
				var classes = ele.className.split(' ');
				$.each(names,function(k,n){
					$.each(classes,function(i,c){
						if(n==c){
							classes.splice(i,1);
						}
					});	
					var className = classes.join(' ');
					ele.className = className;
				});
			});
			return this;
		},
		toggleClass:function(name){
			if(arguments.length === 0){
				this.removeClass();
			}else{
				var names = name.split(" ");
				this.each(function(key,ele){
					$.each(names,function(k,n){
						if($(ele).hasClass(n)){
							$(ele).removeClass(n);
						}else{
							$(ele).addClass(n);
						}	
					});
				});
			}
			
			return this;
		}
	});
	// tips:事件操作相关方法
	njQuery.prototype.extend({
		on:function(name,callBack){
			//tips:1.遍历取出所有元素
			this.each(function(key,ele){
				//tips:2.判断当前元素中是否有保存所有事件的对象
				if(!ele.eventsCache){
					ele.eventsCache = {};
				}
				//tips:3.判断对象中有没有对应类型的数组
				if(!ele.eventsCache[name]){
					ele.eventsCache[name] = [];
					//tips:4.将回调函数添加到数组中
					ele.eventsCache[name].push(callBack);
					//tips:5.添加对应类型的事件
					//tips:addEvent:function(dom,name,callBack)
					njQuery.addEvent(ele,name,function(){
						njQuery.each(ele.eventsCache[name],function(k,method){
							method();
						});
					});	
				}else{
					ele.eventsCache[name].push(callBack);
				}
			});
		},
		off:function(name,callBack){	
			//tips:1.判断是否传入参数
			if(arguments.length === 0){
				this.each(function(key,ele){
					ele.eventsCache = {};
				});
			}else if(!callBack){
				this.each(function(key,ele){
					ele.eventsCache[name] = [];
				});
			}else{
				this.each(function(key,ele){  
					$.each(ele.eventsCache[name],function(index,method){
						if(method === callBack){
							ele.eventsCache[name].splice(index,1);
						}
					});
				});
			}
		}
	});
	njQuery.prototype.init.prototype = njQuery.prototype;
	window.njQuery = window.$ =njQuery;
})(window)