int __fastcall get_return_nonce(_DWORD *a1)
{
  int result; // r0
  int v3; // [sp+8h] [bp-Ch] BYREF
  int v4; // [sp+Ch] [bp-8h] BYREF

  fpga_read(16, &v4);
  result = fpga_read(20, &v3);
  *a1 = v4;
  a1[1] = v3;
  return result;
}
