int __fastcall sub_183E10(int a1)
{
  int v2; // r0
  int v3; // r6
  const char *v4; // r4
  const char *v5; // r3

  v2 = *(_DWORD *)(dword_487914 + 12);
  v3 = *(_DWORD *)(dword_487914 + 8);
  v4 = *(const char **)(*(_DWORD *)(dword_487914 + 36) + 16);
  if ( !v4 )
    v4 = "<noexec>";
  if ( v2 )
    v5 = (const char *)sub_1830AC(v2);
  else
    v5 = "<null>";
  return sub_2573B4(a1, "[Switching to inferior %d [%s] (%s)]\n", v3, v5, v4);
}
