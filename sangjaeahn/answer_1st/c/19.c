#if NO19
C 언어의 문법 구조상 배열 표기와 포인터 표기를 함께 할 수 없어서
int *p[3] 은 포인터 배열이 되고 (포인터에 대한 배열)
int (*p)[3] 은 배열 자체를 가리키는 포인터가 된다.(배열에 대한 포인터)
#endif

/*
int *p[3] 과 int(*p)[3] 의 차이
*/
