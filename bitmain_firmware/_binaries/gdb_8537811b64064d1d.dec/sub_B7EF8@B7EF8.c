int __fastcall sub_B7EF8(int a1)
{
  int v3; // [sp+0h] [bp-8h] BYREF
  int v4; // [sp+4h] [bp-4h] BYREF

  v3 = sub_1B7300();
  ((void (__fastcall *)(int, int *, int *))loc_1690F4)(a1, &v3, &v4);
  return v3 + 2 * v4;
}
