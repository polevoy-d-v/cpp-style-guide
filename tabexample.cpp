int main()
{
    int j(55);
	for (int i(1); i < 10; i += 1) {
    j = min(j , i);
		i *= i;
    }
    return 0;
}