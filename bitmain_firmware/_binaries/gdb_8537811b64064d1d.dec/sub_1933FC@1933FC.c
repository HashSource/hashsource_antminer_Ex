void __fastcall sub_1933FC(int a1)
{
  _DWORD *v2; // r4
  int *v3; // r4
  int v4; // r0
  _DWORD *v5; // r0
  int v6; // r3
  int v7; // r4
  _DWORD v8[3]; // [sp+0h] [bp-2Ch] BYREF
  int v9; // [sp+Ch] [bp-20h]
  _DWORD v10[7]; // [sp+10h] [bp-1Ch] BYREF

  if ( dword_4879D8 )
  {
    v5 = (_DWORD *)sub_242FF0(a1);
    sub_2594D8(*v5, "jit_inferior_init\n");
  }
  v2 = (_DWORD *)((int (__fastcall *)(int, int))loc_16ECB0)(a1, dword_4879E0);
  if ( !*v2 )
  {
    sub_160D5C(a1, (int)&unk_3C0AA0);
    *v2 = 1;
  }
  v3 = (int *)sub_192518();
  sub_1925C0(a1, v3);
  if ( !v4 && sub_192C80(a1, v8, v3) )
  {
    if ( v8[0] == 1 )
    {
      v7 = v9;
      if ( v9 )
      {
        do
        {
          sub_192038(a1, v7, (int)v10, v6);
          if ( !sub_191FD8(v7) )
            sub_192FF8(a1, v7, v10);
          v7 = v10[0];
        }
        while ( v10[0] );
      }
    }
    else
    {
      sub_259880("Unsupported JIT protocol version %ld in descriptor (expected 1)\n", v8[0]);
    }
  }
}
