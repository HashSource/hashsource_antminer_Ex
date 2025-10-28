void __fastcall sub_1A044C(const char *a1)
{
  void *v2; // r6
  void *v3; // r12
  int v4; // r0
  _DWORD *v5; // r3
  _DWORD *v6; // [sp+18h] [bp-10h] BYREF
  void *ptr; // [sp+1Ch] [bp-Ch] BYREF
  int (*v8)(int, int, int, int, int); // [sp+20h] [bp-8h]

  v6 = 0;
  v2 = sub_92564((int)sub_2589E0, (int)&v6);
  if ( a1 )
  {
    sub_19BA14(&ptr, a1, 0);
    v3 = ptr;
    if ( v8 != ptr )
    {
      v4 = sub_1A2AE8(
             *(_DWORD *)ptr,
             *((_DWORD *)ptr + 1),
             *((_DWORD *)ptr + 2),
             *((_DWORD *)ptr + 3),
             *((_DWORD *)ptr + 4),
             *((_DWORD *)ptr + 5),
             *((_DWORD *)ptr + 6),
             *((_DWORD *)ptr + 7),
             *((_DWORD *)ptr + 8),
             *((_DWORD *)ptr + 9));
      v3 = ptr;
      v6 = (_DWORD *)v4;
    }
    if ( v3 )
      sub_339E8C(v3);
    v5 = v6;
  }
  else
  {
    v5 = (_DWORD *)sub_1A2BDC();
    v6 = v5;
  }
  if ( v5 && *v5 && *(_DWORD *)*v5 )
  {
    ptr = sub_1A02B0;
    v8 = sub_1A0F98;
    sub_1A3670();
    sub_92648(v2);
  }
  else
  {
    sub_259B5C("GDB has no preprocessor macro information for that code.\n");
    sub_92648(v2);
  }
}
