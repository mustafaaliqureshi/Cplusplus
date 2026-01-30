#include <iostream>
int Fibonacci(int )
{
			if(N==0||N==1)
			{
			Fib = N;
			return Fib;
			}
			else
			{
				int F1 = fibo(N-2);
				int F2 = fibo(N-1);
				Fib = F1 + F2;
			return Fib;
			}k
}
int main()
{
	Fibonacci objex;
	int G = obj::fibo(8);
	std::cout << "g is "<<G<<endl;
	return 0;
}
//int fibo(int N)
//{
//	if (N=0||N=1)
//	fibo=N;
//	return 0;
//	else
//	{
//		fibo(N-2);
//		fibo(N-1);
//		
//	}
//}