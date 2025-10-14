// Decompiled: LTC_mem_bitmain.ko_611509c615d206a0_debug


undefined4 axi_fpga_dev_open(void)

{
  return 0;
}




undefined8 axi_fpga_dev_llseek(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  bool bVar1;
  
  if (param_5 == 1) {
    bVar1 = CARRY4(param_3,*(uint *)(param_1 + 0x40));
    param_3 = param_3 + *(uint *)(param_1 + 0x40);
    param_4 = param_4 + *(int *)(param_1 + 0x44) + (uint)bVar1;
LAB_00010048:
    if (param_4 == 0 && param_3 < 0x200001) {
      *(uint *)(param_1 + 0x40) = param_3;
      *(int *)(param_1 + 0x44) = param_4;
      goto LAB_00010058;
    }
  }
  else {
    if (param_5 == 2) {
      bVar1 = 0xffe00000 < param_3;
      param_3 = param_3 + 0x1fffff;
      param_4 = param_4 + (uint)bVar1;
      goto LAB_00010048;
    }
    if (param_5 == 0) goto LAB_00010048;
  }
  param_3 = 0xffffffea;
  param_4 = -1;
LAB_00010058:
  return CONCAT44(param_4,param_3);
}




void axi_fpga_dev_mmap(undefined4 param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  
  param_2[10] = param_2[10] | 0x4044000;
  uVar1 = param_2[9];
  param_2[9] = uVar1 & 0xffffffc3;
  remap_pfn_range(param_2,*param_2 + param_2[0x13],0xfe00,0x200000,uVar1 & 0xffffffc3,param_2,param_3);
  return;
}




uint axi_fpga_dev_read(undefined4 param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint *puStack_28;
  
  uVar3 = *param_4;
  if (param_2 == 0 || (param_4[1] != 0 || 0x1fffff < uVar3)) {
    return 0xffffffea;
  }
  if ((int)-(param_4[1] + (uint)(0x200000 < uVar3)) < (int)(uint)(0x200000 - uVar3 < param_3)) {
    param_3 = 0x200000 - uVar3;
  }
  uVar1 = *(uint *)(((uint)&puStack_28 & 0xffffe000) + 8);
  bVar4 = CARRY4(param_2,param_3);
  if (!bVar4) {
    bVar4 = uVar1 < param_2 + param_3 || (param_2 + param_3) - uVar1 < (uint)bVar4;
  }
  if (!bVar4) {
    uVar1 = 0;
  }
  if (uVar1 == 0) {
    uVar2 = coproc_movefrom_Domain_Access_Control();
    uVar1 = uVar2 & 0xfffffff3 | 4;
    coproc_moveto_Domain_Access_Control(uVar1);
    InstructionSynchronizationBarrier(0xf);
    puStack_28 = param_4;
    uVar3 = arm_copy_to_user(param_2,fpga_cache_store_addr + uVar3,param_3,uVar1);
    coproc_moveto_Domain_Access_Control(uVar2);
    InstructionSynchronizationBarrier(0xf);
    if (param_3 != uVar3) {
      uVar1 = *param_4;
      param_3 = param_3 - uVar3;
      *param_4 = uVar1 + param_3;
      param_4[1] = param_4[1] + (uint)CARRY4(uVar1,param_3);
      return param_3;
    }
  }
  return 0xfffffff2;
}




undefined4 axi_fpga_dev_release(void)

{
  return 0;
}




int init_module(void)

{
  int iVar1;
  
  iVar1 = misc_register(&axi_fpga_misc_dev);
  if (iVar1 < 0) {
    printk(&DAT_000103c1,"ltc_mem");
  }
  else {
    fpga_cache_store_addr = memremap(0xfe00000,0x200000,1);
    if (fpga_cache_store_addr == 0) {
      printk(&DAT_000103ea,"ltc_mem");
      misc_deregister(&axi_fpga_misc_dev);
    }
    else {
      mmioset(fpga_cache_store_addr,0,0x200000);
      iVar1 = 0;
      printk(&DAT_00010419,"ltc_mem",fpga_cache_store_addr,fpga_cache_store_addr >> 0x1f);
      printk(&DAT_00010446,"ltc_mem",0xfe00000,0);
      printk(&DAT_00010473,"ltc_mem",0x200000,0);
    }
  }
  return iVar1;
}




void cleanup_module(void)

{
  misc_deregister(&axi_fpga_misc_dev);
  memunmap(fpga_cache_store_addr);
  return;
}



