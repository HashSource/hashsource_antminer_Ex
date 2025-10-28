size_t __fastcall hs_header_sub_encode(void *a1, void *a2)
{
  void *v3[2]; // [sp+0h] [bp-Ch] BYREF

  v3[1] = a1;
  v3[0] = a2;
  return hs_header_sub_write((int *)a1, v3);
}
