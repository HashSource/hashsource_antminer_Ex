int __fastcall sub_1E9ED0(int a1)
{
  int v1; // r0
  int v2; // r0
  const char **v3; // r4
  int result; // r0
  int v5; // r0
  char *v6; // r5
  size_t v7; // r0
  int v8; // r0
  unsigned __int8 *v9; // r0
  unsigned int v10[3]; // [sp+0h] [bp-Ch] BYREF

  v1 = sub_16F67C(a1);
  v2 = ((int (__fastcall *)(int))loc_1E2798)(v1);
  v3 = (const char **)dword_488C94;
  result = sub_22EBE4(v2);
  if ( result )
  {
    v5 = sub_1E8344(result);
    v6 = (char *)*v3;
    v7 = sub_1E28B8(v5);
    sub_93198(v6, v7, "qTMinFTPILen");
    v8 = sub_1E7E14(*v3);
    v9 = (unsigned __int8 *)sub_1E9910(v8);
    if ( *v9 )
    {
      sub_991B0(v9, v10);
      return v10[0];
    }
    else
    {
      return -1;
    }
  }
  return result;
}
