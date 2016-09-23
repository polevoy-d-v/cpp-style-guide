//~beg~>define
#define MIN(L,R) (L < R ? L : R)
//~end~>define

//~beg~>inline
inline int max(int lhs, int rhs)
{
    return (lhs < rhs) ? rhs : lhs;
}
//~end~>inline

//~beg~>template
template<class T>
T
min(const T& lhs, const T& rhs)
{
    return (lhs < rhs) ? lhs : rhs;
}
//~end~>template

int main()
{
    return 0;
}