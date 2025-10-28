int __fastcall sub_268FB8(int a1, int a2, int a3, int a4, const char *a5)
{
  int v8; // r0
  int v9; // r0
  int v10; // r4
  int v11; // r6
  int v12; // r5
  int v13; // r9
  wint_t v14; // t1
  int v15; // r5
  const char *v16; // r4
  char *v17; // r0
  char *next_free; // r3
  char v20[4]; // [sp+10h] [bp-BCh] BYREF
  void (*v21)(void *); // [sp+14h] [bp-B8h]
  int v22; // [sp+18h] [bp-B4h]
  int v23; // [sp+1Ch] [bp-B0h]
  int v24; // [sp+24h] [bp-A8h] BYREF
  int v25; // [sp+28h] [bp-A4h] BYREF
  int v26; // [sp+2Ch] [bp-A0h] BYREF
  int v27; // [sp+30h] [bp-9Ch] BYREF
  _DWORD v28[7]; // [sp+34h] [bp-98h] BYREF
  struct obstack v29; // [sp+50h] [bp-7Ch] BYREF
  struct obstack obstack; // [sp+7Ch] [bp-50h] BYREF

  v22 = a3;
  v8 = sub_170068(a2);
  v23 = ((int (__fastcall *)(int))loc_165BE0)(v8);
  v24 = 0;
  v21 = sub_266344;
  sub_26DA10(v20, a2, a1, a1 >> 31);
  sub_EF578(v28, (int)v20, *(_DWORD *)(a2 + 20), a5, *(_DWORD *)(a2 + 20));
  obstack_begin(&v29, 0, 0, (void *(*)(int))sub_93050, sub_266344);
LABEL_2:
  while ( 1 )
  {
    v9 = sub_EF1B8((int)v28, &obstack, &v25, (char **)&v26, &v27);
    v10 = v9;
    if ( v9 < 0 )
      break;
    if ( v9 )
    {
      v11 = v25;
      v12 = 0;
      v13 = v25 - 4;
      while ( 1 )
      {
        v14 = *(_DWORD *)(v13 + 4);
        v13 += 4;
        if ( !sub_265E64(v14) )
          break;
        if ( v10 <= ++v12 )
        {
          v15 = 0;
          while ( 1 )
          {
            sub_265F24(*(_DWORD *)(v11 + 4 * v15++), v26, v27, *(_DWORD *)(a2 + 20), v23, &v29, a4, &v24);
            if ( v10 <= v15 )
              break;
            v11 = v25;
          }
          goto LABEL_2;
        }
      }
    }
    sub_265F24(0xFFFFFFFF, v26, v27, *(_DWORD *)(a2 + 20), v23, &v29, a4, &v24);
  }
  obstack_begin(&obstack, 0, 0, (void *(*)(int))sub_93050, v21);
  v16 = (const char *)sub_EF47C();
  v17 = sub_EEBE0();
  sub_EEF2C(v16, v17, v29.object_base, v29.next_free - v29.object_base, 4, &obstack, 1);
  next_free = obstack.next_free;
  if ( obstack.chunk_limit == obstack.next_free )
  {
    obstack_newchunk(&obstack, 1);
    next_free = obstack.next_free;
  }
  obstack.next_free = next_free + 1;
  *next_free = 0;
  sub_25A6E4(obstack.object_base, v22);
  obstack_free(&obstack, 0);
  obstack_free(&v29, 0);
  return sub_EF188((int)v28);
}
