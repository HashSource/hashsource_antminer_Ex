int __fastcall hs_header_sub_hash(void *a1, void *a2)
{
  void *v3; // [sp+0h] [bp-114h] BYREF
  void *v4; // [sp+4h] [bp-110h]
  _DWORD v5[61]; // [sp+8h] [bp-10Ch] BYREF
  char *v6; // [sp+FCh] [bp-18h]
  size_t v7; // [sp+100h] [bp-14h]
  size_t v8; // [sp+104h] [bp-10h]

  v4 = a1;
  v3 = a2;
  v8 = hs_header_sub_size((int *)a1);
  v7 = v8 - 1;
  v6 = (char *)&v3;
  hs_header_sub_encode(v4, &v3);
  hs_blake2b_init(v5, 0x20u);
  hs_blake2b_update((int)v5, v6, v8);
  return hs_blake2b_final((int)v5, v3, 0x20u);
}
