int __fastcall sub_707FC(int a1, const char *a2)
{
  const char *v2; // r4
  int v4; // r7
  int v5; // r6
  int v6; // r8
  int v7; // r2
  int v8; // r4
  int v10; // r0
  int v11; // [sp+4h] [bp-4h] BYREF

  v2 = a2;
  if ( *a2 == 39 )
  {
    v2 = a2 + 1;
    v4 = (int)(a2 + 1);
  }
  else
  {
    v4 = sub_9EAF0(a2);
  }
  v5 = sub_A5428(v4, a1, 1, &v11);
  v6 = sub_92564(sub_70774, v11);
  if ( a1 )
  {
    if ( !v5 || (v7 = v11, *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(*(_DWORD *)v11 + 32) >> 3)) != 10) )
      sub_94708("No function \"%s\" in specified context.", v2);
    goto LABEL_7;
  }
  if ( !v5 )
  {
    v10 = sub_21ABAC(v4);
    if ( v10 )
      goto LABEL_15;
    goto LABEL_17;
  }
  v7 = v11;
  if ( *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(*(_DWORD *)v11 + 32) >> 3)) != 10 )
  {
    v10 = sub_21ABAC(v4);
    if ( v10 )
    {
LABEL_15:
      v8 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v10 + 4) + 32) + 12);
      goto LABEL_10;
    }
    v7 = v11;
    if ( *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(*(_DWORD *)v11 + 32) >> 3)) != 10 )
LABEL_17:
      sub_94708("No file or function \"%s\".", v2);
  }
LABEL_7:
  if ( v5 > 1 )
  {
    sub_946D8("Function name \"%s\" ambiguous here", v2);
    v7 = v11;
  }
  v8 = *(_DWORD *)(*(_DWORD *)v7 + 8);
LABEL_10:
  sub_92648(v6);
  return v8;
}
