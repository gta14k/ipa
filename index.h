<!DOCTYPE html>
<html lang="en">

<head>
    <title>gta14k</title>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="./css/bootstrap.min.css">
    <script src="./js/jquery.min.js"></script>
</head>

<body>

<div class="container">
    
    <div class="well">
        <p><span class="text-primary"><b>添加我到软件源</b></span> 这是一个cydia的动态库.</p>
        <a class="btn btn-sm btn-default"
           href="cydia://url/https://cydia.saurik.com/api/share#?source=https://rexinxwy.github.io/repo/"><FONT
                COLOR="#ff0000">点击这里直接把源添加到cydia</FONT></a>
    </div>
    <!--<div class="well">-->
    <!--<p><span class="text-primary"><b>添加我到软件源</span></b> 这是一个sileo的动态库.</p>-->
    <!--<a class="btn btn-sm btn-default" href='sileo://source/https://rexinxwy.github.io/repo/'><FONT COLOR="#ff0000">点击这里直接把源添加到sileo</FONT></a>-->
    <!--</div>-->
    <div class="well">
        <p>
            <span class="text-primary"><b>微信公众号</b></span>
            <br>
            越狱,插件,系统平刷,系统抹除红字报错,越狱过程报错,清除越狱等等修复
        </p>
    </div>
    <div class="well">
        <p>
            <span class="text-primary"><b>关于我们</b></span>
            <br>
            个人软件源,此源永久免费,造福自己,源暂时只支持IOS 13.5,不要问为啥
        </p>
    </div>

    <!--<div class="well">-->
    <!--<p>-->
    <!--<span class="text-primary"><b>越狱相关推荐</b></span>-->
    <!--<br>-->
    <!--企业越狱ipa下载,破解ipa软件,越狱相关教程 ,网站在国外,加载可能会需要一会.稍等一会就好.心急的可以挂vpn,下载软件不需要vpn,软件托管都在国内,网站密码请加QQ群获取,微信也可以联系到我.-->
    <!--</p>-->
    <!--</div>-->
    <!--<div class="well">-->
    <!--<p><span class="text-primary"><b>越狱软件分类</span></b> 各种企业版越狱ipa分流下载屏蔽系统更新描述文件</p>-->
    <!--<a class="btn btn-sm btn-default" href="https://rexinxwy.github.io/repo/%E4%BC%81%E4%B8%9A%E8%B6%8A%E7%8B%B1%E5%90%88%E9%9B%86/"><FONT COLOR="#ff0000">企业版越狱合集</FONT></a>-->
    <!--</div>-->
    <!--<div class="well">-->
    <!--<p><span class="text-primary"><b>破解ipa应用</span></b> 越狱破解软件没有签名直接在线安装永不过期</p>-->
    <!--<a class="btn btn-sm btn-default" href="https://rexinxwy.github.io/repo/%E7%A0%B4%E8%A7%A3%E8%BD%AF%E4%BB%B6%E5%90%88%E9%9B%86/"><FONT COLOR="#ff0000">破解ipa应用合集</FONT></a>-->
    <!--</div>-->
    <!--<div class="well">-->
    <!--<p><span class="text-primary"><b>越狱各种教程</span></b> 各种教程教你如何使用越狱工具带你了解越狱</p>-->
    <!--<a class="btn btn-sm btn-default" href="https://rexinxwy.github.io/repo/%E8%B6%8A%E7%8B%B1%E6%95%99%E7%A8%8B/"><FONT COLOR="#ff0000">点击查看详情</FONT></a>-->
    <!--</div>-->
    <!--<div class="well">-->
    <!--<p><span class="text-primary"><b>越狱系统修复</span></b>越狱报错,红字,黄字,插件安装报错,系统文件紊乱,cydia闪退,等等问题,远程收费修复指导加qq群联系到我</p>-->
    <!--<a class="btn btn-sm btn-default" href="https://qm.qq.com/cgi-bin/qm/qr?k=3E6NIMRxJuoAGun5DH6XLWoQ8cm5T4TW/"><FONT COLOR="#ff0000">点击这里加入我的qq群</FONT></a>-->
    <!--</div>-->
</div>

<p style="text-align:center;">热心小网友 © 2020</p>

<!-- 游览器打开源网站打开最下显示-->

<center>
    <h5>现在是:<span id="year"></span>年
        <span id="month"></span>月
        <span id="day"></span>日
        星期<span id="week"></span>
        <span id="h"></span>时 <span id="m"></span>分 <span id="s"></span>秒

        <script type="text/javascript">
            //获取'年'的ID year
            var year = document.getElementById('year'),
                //获取'月'的ID month
                month = document.getElementById('month'),
                //获取'日'的ID day
                day = document.getElementById('day'),
                //获取'星期'的ID week
                week = document.getElementById('week'),
                //获取'时'的ID h
                h = document.getElementById('h'),
                //获取'分'的ID m
                m = document.getElementById('m'),
                //获取'秒'的ID s
                s = document.getElementById('s');

            function timed() {
                //创建Date时间对象
                var time = new Date();
                //获取四位数的年分并更改year的内容
                year.innerHTML = time.getFullYear();
                //获取月份+1并更改month的内容 月份+1 是因为月份默认从0开始
                month.innerHTML = time.getMonth() + 1;
                //获取日期并更改day的内容
                day.innerHTML = time.getDate();
                //获取星期并更改week的内容
                week.innerHTML = time.getDay();
                //获取小时并更改h的内容
                h.innerHTML = time.getHours();
                //获取分钟并更改m的内容
                m.innerHTML = (time.getMinutes() > 9 ? time.getMinutes() : "0" + time.getMinutes());
                //获取秒钟并更改s的内容
                s.innerHTML = (time.getSeconds() > 9 ? time.getSeconds() : "0" + time.getSeconds());
                //获取星期数用于下面的判断
                w = time.getDay();
                //定义个数组并赋值
                var weekArr = ['天', '一', '二', '三', '四', '五', '六'];
                //for循环
                for (var i = 0; i < weekArr.length; i++) {
                    //如果w的值等于i的值
                    if (w === i) {
                        //就更改week的内容为weekArr[i]
                        //也就是中文的数字
                        week.innerHTML = weekArr[i];
                    }
                }
                //setTimeout函数设置间隔 每1000毫秒执行一次函数
                setTimeout("timed()", 1000);

            }

            timed();

        </script>
    </h5>
</center>

<center>
    <b><FONT COLOR="#0000ff">网站已运行:<span id="run_time" style="color:red"></span></FONT></b>
</center>

<script>
    function runTime() {
        var d = new Date(), str = '';
        BirthDay = new Date("May 31,2020");
        today = new Date();
        timeold = (today.getTime() - BirthDay.getTime());
        sectimeold = timeold / 1000
        secondsold = Math.floor(sectimeold);
        msPerDay = 24 * 60 * 60 * 1000
        msPerYear = 365 * 24 * 60 * 60 * 1000
        e_daysold = timeold / msPerDay
        e_yearsold = timeold / msPerYear
        daysold = Math.floor(e_daysold);
        yearsold = Math.floor(e_yearsold);
        //str = yearsold + "年";
        str += daysold + "天";
        str += d.getHours() + '时';
        str += d.getMinutes() + '分';
        str += d.getSeconds() + '秒';
        return str;
    }

    setInterval(function () {
        $('#run_time').html(runTime())
    }, 1000);
</script>
</body>
</html>
