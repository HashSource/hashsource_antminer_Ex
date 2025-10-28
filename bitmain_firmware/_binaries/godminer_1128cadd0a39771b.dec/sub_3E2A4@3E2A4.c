int sub_3E2A4()
{
  int result; // r0
  int v1; // r2

  result = 0;
  v1 = dword_166FD0 + 1;
  if ( (unsigned int)(dword_166FD0 + 1) >= 0x400000 )
    v1 = 0;
  dword_166FD0 = v1;
  return result;
}
