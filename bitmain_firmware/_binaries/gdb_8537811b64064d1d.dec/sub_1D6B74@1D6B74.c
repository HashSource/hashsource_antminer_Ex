void __fastcall sub_1D6B74(int a1, int a2, int a3)
{
  void *v3; // r0
  int v4; // r3
  _DWORD *v5; // r0

  v3 = (void *)dword_487D98;
  if ( dword_487D98 )
  {
    v4 = dword_487D4C;
    if ( dword_487D4C )
    {
      v5 = (_DWORD *)sub_242FF0(dword_487D98);
      sub_2594D8(*v5, "[record-btrace] detach thread observer\n");
      v3 = (void *)dword_487D98;
    }
    sub_1B981C(v3, a2, a3, v4);
    dword_487D98 = 0;
  }
}
