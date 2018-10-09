//#define FOO() foo
#define FOO(a) foo##a
FOO()
FOO(bar)
