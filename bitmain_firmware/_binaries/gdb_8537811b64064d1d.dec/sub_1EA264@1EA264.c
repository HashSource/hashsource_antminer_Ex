char *__fastcall sub_1EA264(int a1, int a2, _QWORD *a3)
{
  int v5; // r0
  int v6; // r0
  const char **v7; // r4
  int v8; // r0
  char *v9; // r5
  size_t v10; // r0
  int v11; // r0
  char *result; // r0
  unsigned int v13[3]; // [sp+0h] [bp-Ch] BYREF

  v5 = sub_16F67C(a1);
  v6 = ((int (__fastcall *)(int))loc_1E2798)(v5);
  v7 = (const char **)dword_488C94;
  v8 = sub_1E2AC4(v6);
  v9 = (char *)*v7;
  v10 = sub_1E28B8(v8);
  sub_93198(v9, v10, "qTV:%x", a2);
  v11 = sub_1E7E14(*v7);
  result = sub_1E9910(v11);
  if ( result )
  {
    if ( *result == 86 )
    {
      sub_991B0((unsigned __int8 *)result + 1, v13);
      *a3 = *(_QWORD *)v13;
      return (char *)1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
