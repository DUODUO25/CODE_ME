function obj2str(obj){
	obj.t = new Date().getTime();
	var res = [];
	for(var key in obj){
		//tips:在URL中是不能出现中文的，如果出现中文，需要转码，
		// tips:可以调用encodeURIComponent()方法
		// URL中只可以出现字母、数字、下划线、ASCII码
		res.push(encodeURIComponent(key)+"="+encodeURIComponent(obj[key]));
	}
	return res.join("&");
}

function ajax(url,obj,timeout,success,error){
	//0. tips:将对象转换为字符串
	var str = obj2str(obj); // key=value&key=value
	// 1. tips:创建一个异步对象
	var xmlhttp, timer;
	if (window.XMLHttpRequest){// code for IE7+, Firefox, Chrome, Opera, Safari
		xmlhttp=new XMLHttpRequest();
	}
	else{// code for IE6, IE5
		xmlhttp=new ActiveXObject("Microsoft.XMLHTTP");
	}
	// 2. tips:设置请求方式和请求地址
	
			 /*open()的三个参数 method：请求的类型；GET 或 POST
			    url：文件在服务器上的位置
			    async：true（异步）或 false（同步） */

	 xmlhttp.open("GET",url+"?"+str,true);
	// 3. tips:发送请求
	 xmlhttp.send();
	// 4. tips:监听状态的变化
	 xmlhttp.onreadystatechange = function(ev2){
		if(xmlhttp.readyState === 4){
			clearInterval(timer);
			//tips:判断是否请求成功
			if(xmlhttp.status >= 200 && xmlhttp.status <= 300 || xmlhttp.status === 304){
				// 5. tips:处理返回的结果
				//console.log("接收到服务器返回的数据");
				success(xmlhttp);
			}else{
				//console.log("没有接收到服务器返回的数据");
				error(xmlhttp);
			}		
		}
	};
	
	//tips:判断外界是否传入了超时时间
	if(timeout){
		timer = setInterval(function(){
			console.log("中断请求");
			xmlhttp.abort();
			clearInterval(timer);
		},timeout);
	}
}