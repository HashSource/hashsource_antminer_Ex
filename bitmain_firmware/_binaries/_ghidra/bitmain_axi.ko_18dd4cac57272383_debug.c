// Decompiled: bitmain_axi.ko_18dd4cac57272383_debug


/* WARNING: Unknown calling convention */

int axi_fpga_dev_open(inode *inode,file *filp)

{
  return 0;
}




/* WARNING: Unknown calling convention */

loff_t axi_fpga_dev_llseek(file *filp,loff_t offset,int whence)

{
  if (whence == 1) {
    offset = offset + filp->f_pos;
  }
  else if (whence == 2) {
    offset = offset + 0x7ffffff;
  }
  else if (whence != 0) {
    return -0x16;
  }
  if (0x8000000 < (ulong)offset) {
    return -0x16;
  }
  filp->f_pos = offset;
  return offset;
}




void FUN_0010007c(undefined8 param_1,long *param_2)

{
  param_2[9] = param_2[9] & 0xff9fffffffffffe3U | 0x60000000000000;
  param_2[10] = param_2[10] | 0x4044000;
  remap_pfn_range(param_2,*param_2 + param_2[0x13],0x80000,0x1000);
  return;
}




/* WARNING: Unknown calling convention */

int axi_fpga_dev_mmap(file *filp,vm_area_struct *vma)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = vma->vm_flags;
  uVar3 = vma->vm_pgoff;
  (vma->vm_page_prot).pgprot = (vma->vm_page_prot).pgprot & 0xff9fffffffffffe3 | 0x60000000000000;
  vma->vm_flags = uVar1 | 0x4044000;
  iVar2 = remap_pfn_range(vma,vma->vm_start + uVar3,0x80000,0x1000);
  return iVar2;
}




/* WARNING: Unknown calling convention */

ssize_t axi_fpga_dev_read(file *f,char *buf,size_t len,loff_t *ppos)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *ppos;
  if (buf == (char *)0x0 || 0x7ffffff < uVar3) {
    return -0x16;
  }
  lVar2 = sp_el0;
  uVar1 = 0x8000000 - uVar3;
  if (len < 0x8000000 - uVar3) {
    uVar1 = len;
  }
  if ((!CARRY8((ulong)buf,uVar1) && buf + uVar1 <= *(char **)(lVar2 + 8)) &&
     (uVar3 = __arch_copy_to_user(buf,(long)fpga_cache_store_addr + uVar3,uVar1), uVar3 != uVar1)) {
    *ppos = *ppos + (uVar1 - uVar3);
    return uVar1 - uVar3;
  }
  return -0xe;
}




undefined8 axi_fpga_dev_release(void)

{
  return 0;
}




/* WARNING: Unknown calling convention */

int axi_fpga_dev_init(void)

{
  int iVar1;
  int ret;
  
  iVar1 = misc_register(&axi_fpga_misc_dev);
  if (iVar1 < 0) {
    printk(&DAT_00100438,"axi_fpga_dev");
  }
  else {
    fpga_cache_store_addr = (void *)memremap(0x38000000,0x8000000,1);
    if (fpga_cache_store_addr == (void *)0x0) {
      printk(&DAT_00100468,"axi_fpga_dev");
      misc_deregister(&axi_fpga_misc_dev);
    }
    else {
      __memset_io(fpga_cache_store_addr,0,0x8000000);
      iVar1 = 0;
      printk(&DAT_00100498,"axi_fpga_dev",fpga_cache_store_addr);
      printk(&DAT_001004c8,"axi_fpga_dev",0x38000000);
      printk(&DAT_001004f8,"axi_fpga_dev",0x8000000);
    }
  }
  return iVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void axi_fpga_dev_exit(void)

{
  misc_deregister(&axi_fpga_misc_dev);
  memunmap(fpga_cache_store_addr);
  return;
}



