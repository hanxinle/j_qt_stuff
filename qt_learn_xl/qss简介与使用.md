# qss界面美化



# 什么是qss?

​       Qt style sheet, 简写就是qss, Qt样式表，不需要用C++代码对控件进行重载，就可以可以修改控件外观，美化界面，类似于前端的css, 但是没有css功能强大.



​       注释形式：

```css
 /*我是qss注释*/
```



# QLabel样式

### 普通样式，例如：

```css
QLabel 
{
    background-color: rgb(54,54,54);   /*背景色*/
    color: rgb(230,230,230);           /*字体颜色*/
    font-family: "Microsoft YaHei";    /*字体类型*/
    font-size: 14px;                   /*字体大小*/         
}
```

### 字体样式

```css
font-family: "Microsoft YaHei";
font-size: 14px;
font-style: italic;
font-weight: bold;
color: #123456;
```

字体也可以一起设置：

```css
font: bold italic 18px "Microsoft YaHei";
```

**font-family** ：设置字体类型，标准形式需要加双引号，不加也可能会生效，具体看系统是否支持，中英文都支持，但要保证字体编码支持。
**font-size** ：设置字体大小，单位使用 px 像素
**font-style** ：设置字体斜体样式，italic 为斜体， normal 为不斜体
**font-weight** ： 设置字体加粗样式，bold 为加粗， normal 为不加粗

**font** ：同时设置字体 style weight size family 的样式，但是 style(是否斜体) 和 weight (是否加粗)必须出现在开头，size 和 family 在后面，而且 size 必须在 family 之前，否则样式将不生效，font 中不能设置颜色，可以单独设置 style weight 和 size。
**color** ：设置字体颜色，可以使用十六进制数表示颜色，也可以使用某些特殊的字体颜色：red, green, blue 等，或者使用 rgb(r,g,b) 和 rgba(r,g,b,a) 来设置，其中 r、g、b、a 值为0~255，如果想不显示颜色可以设置值为透明 transparent

注意：字体颜色用的是 color 属性，没有 font-color 这个属性

### 边框样式，例如：

```css
QLabel 
{
    border-style: solid;
	/*单独设置某一边 border-right-style:dotted;*/
	
	border-width: 2px;
	border-color: red;
}
```

也可以一起设置

```CSS
border: 2px solid red;
```

​        solid 为实线， dashed 为虚线， dotted 为点线， none 为不显示（如果不设置 border-style 的话，默认会设置为 none）

单独的属性设置

```css
border-top-style: solid;
border-top-width: 2px;
border-top-color: red;
border-top: 2px solid red;
border-right-style: solid;
border-right-width: 3px;
border-right-color: green;
border-right: 3px solid green;
border-bottom-style: solid;
border-bottom-width: 2px;
border-bottom-color: blue;
border-bottom: 2px solid blue;
border-left-style: solid;
border-left-width: 3px;
border-left-color: aqua;
border-left: 3px solid aqua;

```

边框半径

```css
border-top-left-radius: 5px;
border-top-right-radius: 10px;
border-bottom-left-radius: 15px;
border-bottom-right-radius: 20px;
border-radius: 20px;  /*统一的半径*/
```



### 文字位置

​       在 qss 中，没有对齐方式，只能通过设置 padding 来实现文字的显示位置；一般 padding-left 相当于 x 坐标，padding-top 相当于 y 坐标，设置这两个就可以在任意位置显示了（默认情况下文字是上下左右都居中显示的）

```css
padding-left: 10px;
padding-top: 8px;
padding-right: 7px;
padding-bottom: 9px;
```

  

### 背景样式

其它的控件也适用

```css
background-color: rgb(54,54,54);
background-image: url(":/imgs/picture/0.png");   /*显示背景图片, 也可以不用引号*/
background-repeat: no-repeat; 
background-position: left center;

```

统一设置

```css
background: url(":/imgs/picture/0.png") no-repeat left center #363636;
```

**background-color** ：同上面的字体颜色设置
**background-image** ：设置背景图片，图片路径为 url(image-path)
**background-repeat** ：为设置背景图是否重复填充背景，如果背景图片尺寸小于背景实际大小的话，默认会自动重复填充图片，可以设置为 no-repeat 不重复，repeat-x 在x轴重复，repeat-y 在y轴重复
**background-position**：为设置背景图片显示位置，只支持 left right top bottom center；值 left right center 为设置水平位置，值 top bottom center 为设置垂直位置
**background** 为设置背景的所有属性，color image repeat position 这些属性值出现的顺序可以任意

### 动态悬浮样式

```css
QLabel:hover
{
	color: red;
	border-color: green;
    background-color: #363636;
}
```





# 按钮样式

### 基本样式

```css
QPushButton
{  
    /* 前景色 */  
    color:green;  
 
    /* 背景色 */  
    background-color:rgb(223,223,223);  
 
    /* 边框风格 */  
    border-style:outset;  
 
    /* 边框宽度 */  
    border-width:0.5px;  
 
    /* 边框颜色 */  
    border-color:rgb(10,45,110);  
 
    /* 边框倒角 */  
    border-radius:10px;  
 
    /* 字体 */  
    font:bold 14px;  
 
    /* 控件最小宽度 */  
    min-width:100px;  
 
    /* 控件最小高度 */  
    min-height:20px;  
 
    /* 内边距 */  
    padding:4px;  
} 
 
/* 鼠标按下时的效果 */ 
QPushButton#pushButton:pressed   /*单独设置*/
{  
    /* 改变背景色 */  
    background-color:rgb(40,85,20);  
 
    /* 改变边框风格 */  
    border-style:inset;  
 
    /* 使文字有一点移动 */  
    padding-left:6px;  
    padding-top:6px;  
}
 
/* 按钮样式 */ 
QPushButton:flat 
{  
    border:2px solid red;  
} 
 
/*鼠标悬浮时的效果*/
QPushButton:hover
{
    color:#0000ff;
    background-color:rgb(210, 205, 205); /*改变背景色*/
    border-style:inset;/*改变边框风格*/
    padding-left:8px;
    padding-top:8px;
}
```

还可以单独指定按钮，例如：

```css
/*鼠标悬浮时的效果*/
QPushButton#btn2:hover
{
    color:#0000ff;
    background-color:rgb(100, 100, 20); /*改变背景色*/
    border-style:inset;/*改变边框风格*/
    padding-left:8px;
    padding-top:8px;
}
```

相关状态

```css
:checked      button部件被选中
:unchecked    button部件未被选中
:disabled     部件被禁用
:enabled      部件被启用
:focus        部件获得焦点
:hover        鼠标位于部件上
:pressed      部件被鼠标按下
:indeterminate    checkbox或radiobutton被部分选中
:off              部件可以切换，且处于off状态
:on               部件可以切换，且处于on状态
```



### 禁止使用的样式

当按钮被禁用后 ui->pushButton->setEnabled(false);

```css
QPushButton:disabled
{
	color: blue;
	border-color: brown;
    background-color: #363636;
}
```



# 菜单样式

```css
QMenu::item 
{
     font:16px;
     background-color:rgb(253,253,253);
     padding:8px 32px; 
     margin:0px 8px;
     border-bottom:1px solid #DBDBDB;
}
 
/*选择项设置*/
QMenu::item:selected 
{
     background-color: #FFF8DC;
}
```



# 常用选择器

1. 通配符选择器是匹配所有的控件，用星号表示

```css
* {
        background-color:yellow;
}
```

2. 类型选择器是通过控件类型来匹配控件的(包括子类)

```css
QWidget {
        background-color:yellow
}
```

3. 类选择器也是通过控件类型来匹配控件的，但不同的是不包含子类，语法是在类前面加了个.（是个点）

```
.QWidget {
        background-color:yellow
}
```

   这样就只对QWidget生效，btn、label等是不会变化的。 