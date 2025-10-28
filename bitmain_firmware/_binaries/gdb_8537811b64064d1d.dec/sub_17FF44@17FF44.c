int __fastcall sub_17FF44(int a1)
{
  int v1; // r0
  int v2; // r0
  int v4; // r0
  int v5; // r4
  int v6; // r0
  char *v7; // r4
  int v8; // r0
  int v9; // r4

  v1 = sub_1836B0(a1);
  if ( *(_DWORD *)(v1 + 44)
    && (v4 = sub_1836B0(v1),
        v5 = *(_DWORD *)(v4 + 44),
        v6 = sub_1836B0(v4),
        v7 = (char *)sub_17FD0C(v5, *(const char ***)(v6 + 48)),
        v1 = sub_17FBCC(v7),
        v7) )
  {
    free(v7);
    v2 = sub_1836B0(v8);
    if ( !*(_DWORD *)(v2 + 40) )
      goto LABEL_6;
  }
  else
  {
    v2 = sub_1836B0(v1);
    if ( !*(_DWORD *)(v2 + 40) )
    {
LABEL_6:
      v9 = sub_1836B0(v2);
      v2 = sub_32727C("");
      *(_DWORD *)(v9 + 40) = v2;
    }
  }
  return *(_DWORD *)(sub_1836B0(v2) + 40);
}
