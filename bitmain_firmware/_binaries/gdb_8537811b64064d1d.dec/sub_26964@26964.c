int __fastcall sub_26964(int a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v9; // r0

  if ( (a1 & 0xF) != 0xF )
    return sub_1F344(a1, a2, "copro load/store", a4);
  if ( dword_487978 )
  {
    v9 = (_DWORD *)sub_242FF0(a1);
    sub_2594D8(*v9, "displaced: copying coprocessor load/store insn %.4x%.4x\n", a1, a2);
  }
  a4[42] = a1 & 0xFFF0;
  a4[50] = 2;
  a4[43] = a2;
  sub_268E8(a3, (int)a4, 0, 15);
  return 0;
}
