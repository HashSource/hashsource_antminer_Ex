void sub_303D4()
{
  int v0; // r0
  int v1; // r5
  int v2; // r0
  int v3; // r2
  int v4; // r0
  void *v5; // r0
  int v6; // [sp+0h] [bp-1Ch] BYREF
  int v7; // [sp+4h] [bp-18h] BYREF
  int v8; // [sp+8h] [bp-14h] BYREF

  if ( sub_2FDE8(1879048214, *(_DWORD *)(dword_487D2C + 8), &v6, 0) || sub_302B8(1879048214, &v6, 0) )
  {
    v0 = sub_16F67C();
    v1 = *(_DWORD *)(sub_1780DC(v0) + 152);
    v2 = v6;
    v3 = *(_DWORD *)(v1 + 20);
    goto LABEL_4;
  }
  if ( sub_2FDE8(1879048245, *(_DWORD *)(dword_487D2C + 8), &v6, &v7) || sub_302B8(1879048245, &v6, &v7) )
  {
    v4 = sub_16F67C();
    v1 = *(_DWORD *)(sub_1780DC(v4) + 152);
    v3 = *(_DWORD *)(v1 + 20);
    v2 = v6 + v7;
LABEL_4:
    if ( !sub_230048(v2, &v6, v3) )
      sub_15AED0(&v6, v1);
    return;
  }
  if ( !sub_2FDE8(21, *(_DWORD *)(dword_487D2C + 8), &v6, 0) && !sub_302B8(21, &v6, 0) )
  {
    sub_1B1444((int)&v8, "_r_debug");
    if ( v8 )
    {
      if ( *(__int16 *)(v8 + 22) == -1 )
      {
        v5 = (void *)sub_94728("solib-svr4.c", 831, "Section index is uninitialized");
        if ( v5 )
          free(v5);
      }
    }
  }
}
