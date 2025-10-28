int __fastcall sub_24A640(int a1)
{
  int v2; // r4
  char *v3; // r6
  _DWORD *v4; // r5

  v2 = sub_CD294(a1);
  if ( *(_BYTE *)dword_48A914 )
  {
    v3 = sub_93168("collect %s", (const char *)dword_48A914);
    sub_92564(2390348, (int)v3);
    sub_24A170(v3, a1);
    v4 = sub_93050(0x1Cu);
    sub_92564(2390348, (int)v4);
    *v4 = v2;
    v2 = (int)v4;
    v4[1] = v3;
  }
  return v2;
}
