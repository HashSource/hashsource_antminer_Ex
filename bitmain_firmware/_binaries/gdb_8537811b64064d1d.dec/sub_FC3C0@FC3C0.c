int __fastcall sub_FC3C0(char *a1)
{
  const char *v1; // r6
  int result; // r0
  int v3; // r4
  int v4; // r2
  int v5; // r3
  int v6; // r2
  int v7; // r3
  const char ***v8; // r5
  const char ***v9; // r7
  size_t v10; // r0
  _BYTE *v11; // r2
  _BYTE *v12; // r1
  int v13; // r3
  _BYTE *v14; // r0
  int v15; // r2
  int v16; // r3
  _BYTE v17[16]; // [sp+0h] [bp-14h] BYREF
  _BYTE v18[4]; // [sp+10h] [bp-4h] BYREF

  v1 = a1;
  if ( a1 )
  {
    result = sub_FC280(a1);
    if ( !result )
      sub_94708("Could not find \"%s\" in ABI list", v1);
  }
  else
  {
    v3 = *(_DWORD *)sub_243004(0);
    sub_2573A8(v3, "The available C++ ABIs are:\n", v4, v5);
    sub_2578D4(v3, 0);
    v7 = dword_47AFF0;
    if ( dword_47AFF0 > 0 )
    {
      v8 = (const char ***)&unk_47AFF4;
      do
      {
        sub_2573A8(v3, "  ", v6, v7);
        v9 = v8;
        sub_257610(v3, "cp-abi", **v8);
        v10 = strlen(**v8);
        v11 = 0;
        v12 = v18;
        v13 = (int)&v18[14 - v10];
        if ( (int)(14 - v10) <= 0 )
          v12 = v17;
        *(_BYTE *)(v13 - 16) = 0;
        if ( (int)(14 - v10) > 0 )
        {
          v12 = v17;
          v14 = &v17[13 - v10];
          v11 = &v17[-1];
          v13 = 32;
          do
            *v14-- = 32;
          while ( v11 != v14 );
        }
        sub_2573A8(v3, v12, v11, v13);
        ++v8;
        sub_257610(v3, "doc", (*v9)[2]);
        sub_2573A8(v3, &word_356660, v15, v16);
        v7 = dword_47AFF0;
        ++v1;
      }
      while ( dword_47AFF0 > (int)v1 );
    }
    return sub_257374(v3, 0);
  }
  return result;
}
