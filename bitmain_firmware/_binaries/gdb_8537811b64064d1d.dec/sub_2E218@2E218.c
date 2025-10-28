int __fastcall sub_2E218(int a1, unsigned int a2, int a3, int a4)
{
  _DWORD *v8; // r0
  int v9; // r4
  int v10; // r10
  _DWORD *v12; // r0

  v8 = (_DWORD *)sub_98394(216);
  v9 = (int)v8;
  *v8 = off_34BE44;
  if ( a2 <= 0xFFFF0000 )
  {
    v8[36] = sub_2DFF0;
    sub_28024(a1, a2, a3, a4, (int)v8);
  }
  else
  {
    if ( dword_487978 )
    {
      v12 = (_DWORD *)sub_242FF0(v8);
      sub_2594D8(*v12, "displaced: detected kernel helper at %.8lx\n", a2);
    }
    v10 = ((int (__fastcall *)(int))loc_165BE0)(a1);
    *(_DWORD *)(v9 + 200) = 1;
    *(_DWORD *)(v9 + 140) = 1;
    *(_DWORD *)(v9 + 212) = sub_2DF98;
    *(_DWORD *)(v9 + 204) = a2;
    *(_QWORD *)(v9 + 8) = sub_25AA0(a4, v9, 14);
    sub_25B98(a4, v9, 14, a3 + 4, a3 + 4, __CFADD__(a3, 4), 4);
    sub_FAB54(a3 + 8, 4, v10, 0, a2, 0);
    *(_DWORD *)(v9 + 168) = -442568700;
  }
  sub_2A254(a1, a2, a3, v9);
  return v9;
}
