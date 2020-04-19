(function(window){
	function Progress($progressBar,$progressLine,$progressDot){
		return new Progress.prototype.init($progressBar,$progressLine,$progressDot);
	}
	Progress.prototype = {
			constructor:Progress,
			init:function($progressBar,$progressLine,$progressDot){
				this.$progressBar = $progressBar;
				this.$progressLine = $progressLine;
				this.$progressDot = $progressDot;
			},
			isMove:false,
			progressClick:function(callBack){
				var $this = this; //tips；此时此刻的this是progress
				//tips:监听背景的点击
				this.$progressBar.click(function(event){
					//tips：获取背景距离窗口默认的位置
					var normalLeft = $(this).offset().left;
					//tips：获取点击距离窗口的位置
					var eventLeft = event.pageX;
					//tips:设置前景的宽度
					$this.$progressLine.css("width",eventLeft-normalLeft);
					$this.$progressDot.css("left",eventLeft-normalLeft);
					//tips:计算进度条的比例
					var value = (eventLeft-normalLeft) / $(this).width();
					callBack(value);
				});
			},
			progressMove:function(callBack){
				var $this = this;
				//tips：获取背景距离窗口默认的位置
				var normalLeft = this.$progressBar.offset().left;
				var barWidth = this.$progressBar.width();
				//tips：获取点击距离窗口的位置
				var eventLeft;
				//tips:监听鼠标的按下事件
				this.$progressBar.mousedown(function(){
					$this.isMove = true;
					//tips:监听鼠标的移动事件
					$(document).mousemove(function(){
						//tips：获取点击距离窗口的位置
						var eventLeft = event.pageX;
						
						var offset = eventLeft-normalLeft;
						if(offset >=0 && offset<=barWidth){
							//tips:设置前景的宽度
							$this.$progressLine.css("width",offset);
							$this.$progressDot.css("left",offset);
						}	
					});
				});
				//tips:监听鼠标的抬起事件
				$(document).mouseup(function(){
					$(document).off("mousemove");
					$this.isMove = false;
					//tips:计算进度条的比例
					var value = (eventLeft-normalLeft) / $this.$progressBar.width();
					callBack(value);
				});
			},
			setProgress:function(value){
				if(this.isMove){
					return;
				}
				if(value<0 || value>100){
					return;
				}
				this.$progressLine.css({
					width:value+"%"
				});
				this.$progressDot.css({
					left:value+"%"
				});
			}
	}
	Progress.prototype.init.prototype = Progress.prototype;
	window.Progress = Progress;
})(window);