int *__fastcall sub_FE27C(int *a1, int a2, char *a3, _DWORD *a4, int a5)
{
  char *v9; // r0
  char *v10; // r7
  _DWORD *v11; // r0
  int v13; // r4
  char *v14; // r2
  int v15; // r11
  char *v16; // r9
  const char *v17; // r0

  v9 = sub_C25D0((int)a4);
  v10 = v9;
  if ( dword_48970C )
  {
    v15 = *(_DWORD *)sub_242FF0(v9);
    v16 = sub_98F14((int)a4);
    v17 = (const char *)((int (__fastcall *)(int))loc_21A5CC)(a5);
    sub_2594D8(v15, "cp_lookup_symbol_non_local (%s, %s (scope %s), %s)\n", a3, v16, v10, v17);
  }
  v11 = (_DWORD *)((int (__fastcall *)(int *, int, char *, _DWORD *, int, char *, _DWORD))loc_FE10C)(
                    a1,
                    a2,
                    a3,
                    a4,
                    a5,
                    v10,
                    0);
  if ( !*a1 )
    v11 = sub_FDF64(a1, v10, a3, a4, a5);
  if ( !dword_48970C )
    return a1;
  v13 = *(_DWORD *)sub_242FF0(v11);
  if ( *a1 )
    v14 = sub_98F14(*a1);
  else
    v14 = "NULL";
  sub_2594D8(v13, "cp_lookup_symbol_nonlocal (...) = %s\n", v14);
  return a1;
}
