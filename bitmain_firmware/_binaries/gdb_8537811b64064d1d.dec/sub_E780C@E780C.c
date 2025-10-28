char **__fastcall sub_E780C(char **a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r0
  int v7; // r0
  const char *v8; // r5
  char *v9; // r0
  char *v10; // r0
  char *v11; // r3
  void *ptr; // [sp+0h] [bp-1Ch] BYREF
  char v14; // [sp+8h] [bp-14h] BYREF

  v5 = sub_171280(a2);
  v6 = sub_171280(*(_DWORD *)(*(_DWORD *)(v5 + 24) + 20));
  sub_255E0C(&ptr, v6);
  v7 = a3;
  v8 = (const char *)ptr;
  v9 = sub_98E44(v7);
  v10 = sub_93168("* (%s *) %s", v8, v9);
  v11 = (char *)ptr;
  *a1 = v10;
  if ( v11 != &v14 )
    sub_339E8C(v11);
  return a1;
}
