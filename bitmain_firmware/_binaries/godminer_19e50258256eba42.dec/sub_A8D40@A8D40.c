unsigned __int64 __fastcall sub_A8D40(unsigned __int64 a1)
{
  unsigned __int64 v1; // r0
  unsigned __int64 v3; // [sp+8h] [bp-Ch]

  v1 = qword_46A3E0[sub_34579C(a1, 0x1D4Cu)];
  v3 = v1 >> 8;
  printf("dag_load: %lx\n", HIDWORD(v1));
  return v3;
}
