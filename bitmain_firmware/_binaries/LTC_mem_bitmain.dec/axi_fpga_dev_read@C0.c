int __fastcall axi_fpga_dev_read(int a1, int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // r4
  __int64 v5; // r10
  _BOOL4 v7; // r3
  int v9; // r2
  bool v10; // cf
  int v11; // r1
  int result; // r0
  unsigned int v13; // r7
  int v14; // r1
  int v15; // r0
  _QWORD *v16; // [sp+0h] [bp-4h] BYREF

  v16 = a4;
  v4 = a3;
  v5 = *a4;
  v7 = *a4 > 0x1FFFFFu;
  if ( !a2 )
    v7 = 1;
  if ( v7 )
    return -22;
  if ( 0x200000 - v5 < a3 )
    v4 = 0x200000 - v5;
  v9 = *(_DWORD *)((char *)axi_fpga_dev_llseek + ((unsigned int)&v16 & 0xFFFFE000));
  v10 = __CFADD__(a2, v4);
  v11 = a2 + v4;
  if ( !__CFADD__(a2, v4) )
    v10 = __CFSUB__(v11, v9, __CFADD__(a2, v4));
  if ( !v10 )
    v9 = 0;
  if ( v9 )
    return -14;
  v13 = __mrc(15, 0, 3, 0, 0);
  v14 = fpga_cache_store_addr;
  __mcr(15, 0, v13 & 0xFFFFFFF3 | 4, 3, 0, 0);
  __isb(0xFu);
  v15 = arm_copy_to_user(a2, v14 + v5, v4);
  __mcr(15, 0, v13, 3, 0, 0);
  __isb(0xFu);
  if ( v4 == v15 )
    return -14;
  result = v4 - v15;
  *a4 += (unsigned int)result;
  return result;
}
