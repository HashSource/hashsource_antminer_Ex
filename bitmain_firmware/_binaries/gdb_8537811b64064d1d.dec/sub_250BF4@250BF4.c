char *__fastcall sub_250BF4(int a1)
{
  int v2; // r4
  int v3; // r4
  char *result; // r0
  char *v5; // r2
  int i; // r3

  v2 = ((int (*)(void))loc_166EC4)();
  v3 = v2 + ((int (__fastcall *)(int))loc_166F70)(a1);
  result = sub_15D2A4((char *)(16 * v3));
  if ( v3 > 0 )
  {
    v5 = result;
    for ( i = 0; i != v3; ++i )
    {
      *((_DWORD *)v5 + 2) = i;
      *(_QWORD *)v5 = -1;
      v5 += 16;
    }
  }
  return result;
}
