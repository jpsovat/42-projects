*This project has been created as part of the 42 curriculum by jsovat-d.*

# Born2beroot

## 📌 Description

Born2beroot is a system administration project aimed at introducing the basics of server configuration, virtualization, and security.  
The student must create a fully functional and secure virtual machine using Debian or Rocky Linux, configure encrypted partitions with LVM, apply strict password and user policies, set up SSH and firewall rules, and write a monitoring script executed via cron.

This project develops essential skills for system administration, including service management, security hardening, user policies, and virtualization tools.

---

## 📌 Instructions

### 🖥️ Virtual Machine Setup

This project was built using **VirtualBox** and **Debian**, following the subject’s mandatory requirements.

The VM uses:

- A **/boot** partition unencrypted  
- LUKS encryption for the main disk  
- LVM with the following logical volumes:
  - `root`
  - `home`
  - `var`
  - `tmp`
  - `swap`

To verify the structure:

lsblk
df -h
sudo pvdisplay
sudo vgdisplay
sudo lvdisplay


---

### 🔐 Password Policy

Password rules were implemented using:

- `/etc/pam.d/common-password`
- `/etc/login.defs`

Mandatory constraints include:

- Minimum 10 characters  
- At least 1 uppercase, lowercase, digit, and special character  
- Limited retries and user restrictions  
- Enforced for root  

---

### 🔑 SSH Configuration

SSH is configured to:

- Run **only on port 4242**
- Disable root login
- Accept login from regular users only

Config file:



sudo nano /etc/ssh/sshd_config


---

### 🔥 Firewall (UFW)

UFW is enabled by default and includes:

- Rule for port **4242**
- Other rules as necessary for testing

Commands:



sudo ufw status numbered
sudo ufw allow 8080
sudo ufw delete <rule_number>


---

### 📊 Monitoring Script

A monitoring script is located at:



/usr/local/bin/monitoring.sh


It is configured to run via cron every 10 minutes at startup:



sudo crontab -e
*/10 * * * * /usr/local/bin/monitoring.sh


During evaluation, the interval may be changed temporarily (e.g., to 1 minute).

---

## 📌 Resources

### Documentation

- Debian Handbook  
- LVM & cryptsetup documentation  
- UFW manual  
- systemd documentation  
- PAM (Pluggable Authentication Modules) documentation  
- SSH official manual  
- VirtualBox official documentation  

### AI Usage

Artificial intelligence (ChatGPT) was used **only** for:

- Clarifying concepts related to LVM, SSH, UFW, PAM, and cron  
- Improving the clarity and structure of documentation  
- Simulating evaluation behavior for self-testing  
- Organizing checklists and explanations

All configurations, commands, and system setups were manually performed inside the virtual machine.

---

## 📌 Design Choices & Comparisons

### 🖥️ Debian vs Rocky Linux

**Chosen OS: Debian**

**Pros:**
- Very stable and widely supported  
- Simple package manager (`apt`)  
- AppArmor is simpler than SELinux  
- Excellent for beginners and learning environments  

**Cons:**
- Slightly older software versions  
- Less enterprise focus than Rocky/RHEL  

**Rocky Pros:**
- RHEL-compatible enterprise environment  
- SELinux offers powerful MAC security  
- firewalld for dynamic firewall management  

---

### 🔒 AppArmor vs SELinux

**AppArmor (Debian default):**
- Path-based security  
- Easier to configure and debug  
- Ideal for learning environments  

**SELinux (Rocky default):**
- Label-based MAC system  
- More powerful but complex  
- Common in enterprise servers  

---

### 🔥 UFW vs firewalld

**UFW (chosen):**
- Simple and intuitive  
- Perfect for a single-host firewall  
- Easy syntax and static rule set  

**firewalld:**
- Zone-based  
- More dynamic and flexible  
- Better suited for enterprise setups  

---

### 📦 VirtualBox vs UTM

**VirtualBox (chosen):**
- Cross-platform  
- Integrated with 42 environments  
- Reliable and easy to configure  

**UTM:**
- Designed for Apple Silicon  
- Uses QEMU under the hood  
- More resources required and slower in some setups  

---

## 📌 Signature

This repository contains a single required file for evaluation:



signature.txt


This file holds the **SHA1 hash** of the VM's virtual disk (`.vdi`).  
During the defense, the evaluator will recompute the hash and compare it to ensure that the VM being tested is identical to the one submitted.

---

## ✔️ End of README
