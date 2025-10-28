int __fastcall sub_373A4(int a1)
{
  int v3; // r0
  int v4; // [sp+0h] [bp-8h] BYREF
  int v5; // [sp+4h] [bp-4h] BYREF

  if ( sub_BC32C(&dword_4899A0, 9, &v4) <= 0 )
  {
    v3 = sub_92F8C(14, "Cannot find AT_ENTRY auxiliary vector entry.");
    return sub_37418(v3);
  }
  else
  {
    v4 = ((int (__fastcall *)(int, int, int *))loc_169F00)(a1, v4, &dword_4899A0);
    ((void (__fastcall *)(int, int *, int *))loc_1690F4)(a1, &v4, &v5);
    return v4 + 2 * v5;
  }
}
