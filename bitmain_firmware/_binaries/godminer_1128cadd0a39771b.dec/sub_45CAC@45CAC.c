int sub_45CAC()
{
  int result; // r0
  int v1; // r2

  result = 0;
  v1 = dword_167160 + 1;
  if ( (unsigned int)(dword_167160 + 1) >= 0x4000 )
    v1 = 0;
  dword_167160 = v1;
  return result;
}
