# 访问者模式

1. 意图

表示一个作用于某对象结构中的各元素的操作。它使你可以在不改变各元素的类的前提 下定义作用于这些元素的新操作。

2. 动机

考虑一个编译器，它将源程序表示为一个抽象语法树。该编译器需在抽象语法树上实施 某些操作以进行“静态语义”分析，例如检查是否所有的变量都已经被定义了。它也需要生 成代码。因此它可能要定义许多操作以进行类型检查、代码优化、流程分析，检查变量是否 在使用前被赋初值，等等。此外，还可使用抽象语法树进行优美格式打印、程序重构、 c o d e i n s t r u m e n t a t i o n以 及 对 程 序 进 行 多 种 度 量 。