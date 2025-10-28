void __fastcall sub_248668(_DWORD *a1)
{
  int v1; // r0
  int v2; // r1
  size_t v3; // r8
  int v4; // r0
  int v5; // r0
  __int64 v6; // r0
  void *v7; // r0
  _DWORD *v8; // r0
  void *src; // [sp+4h] [bp-1Ch]

  if ( !a1[5] )
  {
    if ( (int)a1[8] >= 0 )
    {
      if ( (int)a1[7] > 20 )
        sub_94708("Expression is too complicated.");
      return;
    }
    sub_94728((int)"tracepoint.c", 628, "expression has min height < 0");
  }
  sub_94728((int)"tracepoint.c", 623, "expression is malformed");
  v1 = sub_23059C((int)&dword_4899A0);
  if ( v2 < 0 )
  {
    sub_1780DC();
    sub_26BBA8(*v8);
  }
  else
  {
    v3 = v1;
    sub_1780DC();
    v5 = sub_17221C(*(_DWORD **)(v4 + 88), v3);
    v6 = sub_26BBA8(v5);
    v7 = (void *)sub_26BCE0(v6, HIDWORD(v6));
    memcpy(v7, src, v3);
    if ( src )
      free(src);
  }
}
