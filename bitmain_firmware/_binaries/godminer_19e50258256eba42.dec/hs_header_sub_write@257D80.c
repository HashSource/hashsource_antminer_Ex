size_t __fastcall hs_header_sub_write(int *a1, void **a2)
{
  size_t v5; // [sp+Ch] [bp-8h]
  size_t v6; // [sp+Ch] [bp-8h]
  size_t v7; // [sp+Ch] [bp-8h]
  size_t v8; // [sp+Ch] [bp-8h]
  size_t v9; // [sp+Ch] [bp-8h]

  v5 = sub_257330(a2, a1 + 33, 0x18u);
  v6 = sub_257330(a2, a1 + 39, 0x20u) + v5;
  v7 = sub_257330(a2, a1 + 47, 0x20u) + v6;
  v8 = sub_257330(a2, a1 + 55, 0x20u) + v7;
  v9 = sub_25724C((_DWORD **)a2, a1[63]) + v8;
  return sub_25724C((_DWORD **)a2, a1[64]) + v9;
}
