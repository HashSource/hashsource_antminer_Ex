int __fastcall get_return_nonce_128bit(_DWORD *a1)
{
  int result; // r0
  int v3; // [sp+8h] [bp-14h] BYREF
  int v4; // [sp+Ch] [bp-10h] BYREF
  int v5; // [sp+10h] [bp-Ch] BYREF
  int v6; // [sp+14h] [bp-8h] BYREF

  v6 = 0;
  v5 = 0;
  v4 = 0;
  v3 = 0;
  fpga_read(16, &v6);
  fpga_read(20, &v5);
  fpga_read(16, &v4);
  result = fpga_read(20, &v3);
  *a1 = v6;
  a1[1] = v5;
  a1[2] = v4;
  a1[3] = v3;
  return result;
}
