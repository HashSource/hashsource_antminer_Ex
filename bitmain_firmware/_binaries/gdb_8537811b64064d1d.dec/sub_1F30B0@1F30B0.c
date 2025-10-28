void __fastcall sub_1F30B0(int a1, int a2, int a3, int a4)
{
  int v6; // r0
  int v7; // r4
  int v8; // r0
  int v9; // r0
  char *v10; // r6
  size_t v11; // r0
  int v12; // r0
  void *v13; // r0
  int v14; // r3
  int v15; // r3
  _BYTE v16[12]; // [sp+8h] [bp-18h] BYREF
  void *ptr; // [sp+14h] [bp-Ch] BYREF
  int v18; // [sp+18h] [bp-8h]
  int v19; // [sp+1Ch] [bp-4h]

  v6 = sub_273FC8(a4, "id");
  sub_1E13FC((int)v16, *(unsigned __int8 **)(v6 + 4), 0);
  sub_1F589C(a3, v16);
  v7 = *(_DWORD *)(a3 + 4);
  v8 = sub_273FC8(a4, "core");
  if ( v8 )
    *(_DWORD *)(v7 - 16) = **(_DWORD **)(v8 + 4);
  v9 = sub_273FC8(a4, "name");
  if ( v9 )
  {
    v10 = *(char **)(v9 + 4);
    v11 = strlen(v10);
    sub_33BC7C(v7 - 40, 0, *(_DWORD *)(v7 - 36), v10, v11);
  }
  v12 = sub_273FC8(a4, "handle");
  if ( v12 )
  {
    sub_992B0(&ptr, *(char **)(v12 + 4));
    v13 = *(void **)(v7 - 12);
    *(_DWORD *)(v7 - 4) = 0;
    *(_DWORD *)(v7 - 8) = 0;
    *(_DWORD *)(v7 - 12) = 0;
    *(_DWORD *)(v7 - 12) = ptr;
    ptr = 0;
    v14 = *(_DWORD *)(v7 - 8);
    *(_DWORD *)(v7 - 8) = v18;
    v18 = v14;
    v15 = *(_DWORD *)(v7 - 4);
    *(_DWORD *)(v7 - 4) = v19;
    v19 = v15;
    if ( v13 )
      sub_339E8C(v13);
    if ( ptr )
      sub_339E8C(ptr);
  }
}
