//do while循环
// 
//语法：
//do
//    循环语句;
//while（表达式）; - while循环是先判断再执行，do while循环是先执行再判断

#include <stdio.h>

int main()
{
	int i = 1;
	do
	{
		//if (5 == i)
			//break; - 1 2 3 4
			//continue; - 1 2 3 4 死循环

		printf("%d ", i);
		i++;
	} while (i <= 10);

	return 0;
}

//在C语言中，break和 continue关键字都可以用来改变循环的流程，
//它们在 for、while和 do...while这三种循环结构中的作用是一致的：
//break：
//当在循环体内的某个位置遇到 break语句时，它将立即终止当前循环，包括它所在的那一层循环，然后跳转到紧接在循环后面的语句执行。
//如果是嵌套循环（即循环里面还有循环），break只会跳出它所在的最内层循环。
//continue：
//当在循环体内执行到 continue语句时，它会立即跳过当前循环体中剩余未执行的语句，并返回到循环的迭代部分，重新检查循环条件以决定是否执行下一次循环。
//在 for循环中，continue将跳过剩余的迭代部分，直接执行更新表达式，然后检查条件表达式；
//在 while和 do...while循环中，continue直接跳到循环条件处再次判断是否满足继续下一次循环的条件。

//总结来说，break是为了彻底结束循环，而 continue是为了跳过本次循环中剩余的代码并提前进入下一轮循环的条件检查阶段。