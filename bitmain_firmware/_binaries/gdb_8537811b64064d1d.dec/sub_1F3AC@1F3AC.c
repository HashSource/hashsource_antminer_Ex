int __fastcall sub_1F3AC(int a1, const char *a2, int *a3)
{
  _DWORD *v6; // r0

  if ( dword_487978 )
  {
    v6 = (_DWORD *)sub_242FF0();
    sub_2594D8(*v6, "displaced: copying insn %.4x, opcode/class '%s' unmodified\n", a1, a2);
  }
  *a3 = a1;
  return 0;
}
