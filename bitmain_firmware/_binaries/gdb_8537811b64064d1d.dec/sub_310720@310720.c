int __fastcall sub_310720(_DWORD *a1, unsigned __int8 **a2, int a3)
{
  int v6; // r7
  int v7; // r6
  unsigned __int8 *v8; // r3
  int v9; // r12
  int v10; // r3
  int v12; // [sp+0h] [bp-10h] BYREF
  void *ptr; // [sp+4h] [bp-Ch] BYREF
  int v14; // [sp+8h] [bp-8h]
  int v15; // [sp+Ch] [bp-4h]

  sub_30D40C(a3, "template <");
  if ( !sub_30CC20(a2, &v12) || v12 <= 0 )
  {
    v6 = 1;
LABEL_11:
    if ( *(_BYTE *)(*(_DWORD *)(a3 + 4) - 1) == 62 )
      goto LABEL_9;
    goto LABEL_12;
  }
  v6 = 1;
  v7 = 0;
  while ( 1 )
  {
    v8 = *a2;
    v9 = **a2;
    if ( v9 == 90 )
    {
      *a2 = v8 + 1;
      sub_30D40C(a3, "class");
      goto LABEL_15;
    }
    if ( v9 != 122 )
      break;
    *a2 = v8 + 1;
    v6 = sub_310720(a1, a2, a3);
    if ( !v6 )
      goto LABEL_19;
LABEL_15:
    if ( v12 <= ++v7 )
      goto LABEL_11;
    sub_30D40C(a3, ", ");
  }
  v6 = sub_30E850(a1, a2, (unsigned int)&ptr);
  if ( v6 )
  {
    sub_30D554(__SPAIR64__(&ptr, a3), v14);
    if ( ptr )
    {
      free(ptr);
      v14 = 0;
      v15 = 0;
      ptr = 0;
    }
    goto LABEL_15;
  }
  if ( !ptr )
  {
LABEL_19:
    v6 = 0;
    goto LABEL_11;
  }
  free(ptr);
  v10 = *(_DWORD *)(a3 + 4);
  v14 = 0;
  v15 = 0;
  ptr = 0;
  if ( *(_BYTE *)(v10 - 1) != 62 )
    goto LABEL_12;
LABEL_9:
  sub_30D40C(a3, (char *)&word_3E1FAC);
LABEL_12:
  sub_30D40C(a3, "> class");
  return v6;
}
