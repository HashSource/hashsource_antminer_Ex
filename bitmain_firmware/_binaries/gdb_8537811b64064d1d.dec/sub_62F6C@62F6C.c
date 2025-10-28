int sub_62F6C()
{
  int result; // r0
  _DWORD *v1; // r3

  result = sub_183DC4();
  LOWORD(v1) = (unsigned __int16)&dword_474860;
  if ( result )
  {
    HIWORD(v1) = (unsigned int)&dword_474860 >> 16;
    *v1 = v1[1];
    sub_94708("Cannot change this setting while the inferior is running.");
  }
  HIWORD(v1) = (unsigned int)&dword_474860 >> 16;
  v1[1] = *v1;
  return result;
}
