int __fastcall sub_2173D8(int a1, const char *a2, int a3, int a4, int a5, int a6, const char *a7, int a8)
{
  char *v12; // r0
  int v14; // [sp+1Ch] [bp-20h]
  int v15; // [sp+20h] [bp-1Ch]
  const char *v16; // [sp+24h] [bp-18h]
  char *v17; // [sp+28h] [bp-14h]
  char *v18; // [sp+30h] [bp-Ch]
  const char *v19; // [sp+34h] [bp-8h]

  v15 = sub_1B6B4C(a1, (_DWORD *)dword_4896EC);
  v14 = *(_DWORD *)sub_242FF0(v15);
  v19 = (const char *)sub_1B87F4(a1);
  v16 = (const char *)((int (__fastcall *)(int))loc_21A5CC)(a3);
  v17 = sub_98F14(a5);
  sub_98F14(a6);
  v18 = sub_988D4((int)a7);
  v12 = sub_98F14(a8);
  sub_25A440(
    v14,
    "qf->map_matching_symbols (%s, \"%s\", %s, %d, %s, %s, %s, %s)\n",
    v19,
    a2,
    v16,
    a4,
    v17,
    a7,
    v18,
    v12);
  return (*(int (__fastcall **)(int, const char *, int, int, int, int, const char *, int))(*(_DWORD *)(*(_DWORD *)v15 + 40)
                                                                                         + 44))(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}
