bool sub_22DA78()
{
  _BOOL4 result; // r0
  int v1; // r3

  result = sub_183DC4();
  LOWORD(v1) = (unsigned __int16)&dword_46DBC0;
  if ( result )
  {
    HIWORD(v1) = (unsigned int)&dword_46DBC0 >> 16;
    *(_DWORD *)(v1 + 0x10) = *(_DWORD *)(v1 + 4);
    sub_94708("Cannot change this setting while the inferior is running.");
  }
  HIWORD(v1) = (unsigned int)&dword_46DBC0 >> 16;
  *(_DWORD *)(v1 + 4) = *(_DWORD *)(v1 + 0x10);
  return result;
}
