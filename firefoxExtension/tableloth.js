document.title="桌布"
window.console.log("hello firefox")

// 性能要求会低一点
setInterval(()=>{document.title="桌布"},1000)

// 性能待测试，执行很频繁，不知道对性能影响几何
// function title() {
//     setTimeout(title, 0); 
//     console.log("更改名称到桌布");
//     if (document.title != "桌布") {
//         document.title = "桌布"
//     } else {
//     }
// };
// title();

//无法请求全屏，因为不允许，不知道注入可以吗
//error:不是从短期运行的用户生成的事件处理函数
// document.body.mozRequestFullScreen()
