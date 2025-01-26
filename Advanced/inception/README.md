<p align="center">
  <img src="https://github.com/jotavare/jotavare/blob/main/42/banners/piscine_and_common_core/github_piscine_and_common_core_banner_inception.png">
</p>

<p align="center">
	<img src="https://img.shields.io/badge/status-in%20progress-yellow?style=flat-square"/>
	<img src="https://img.shields.io/github/languages/top/jotavare/inception?color=%2312bab9&style=flat-square" />
	<img src="https://img.shields.io/github/last-commit/jotavare/inception?color=%2312bab9&style=flat-square"/>
	<a href='https://www.linkedin.com/in/joaoptoliveira' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-100000?style=flat-square&logo=Linkedin&logoColor=white&labelColor=0A66C2&color=0A66C2'/></a>
	<a href='https://profile.intra.42.fr/users/jotavare' target="_blank"><img alt='42' src='https://img.shields.io/badge/Porto-100000?style=flat-square&logo=42&logoColor=white&labelColor=000000&color=000000'/></a>
</p>

<p align="center">
	<a href="#about">About</a> •
	<a href="#download">Download</a> •
	<a href="#create-a-new-virtual-machine">Create a New Virtual Machine</a> •
	<a href="#install-debian-os">Install Debian OS</a> •
	<a href="#install-necessary-software">Install Necessary Software</a> •
	<a href="#port-forwarding">Port Forwarding</a> •
	<a href="#save-the-configuration">Save the Configuration</a> •
	<a href="#pre-configure-docker">Pre-Configure Docker</a> •
	<a href="#change-domain-and-install-certificates">Change Domain and Install Certificates</a> •
	<a href="#contributing">Contributing</a> •
	<a href="#license">License</a>
</p>

## ABOUT
This project is designed to enhance my understanding of system administration by utilising Docker to virtualise multiple images within my virtual machine. The objective is to establish a streamlined infrastructure incorporating WordPress alongside a LEMP Stack (consisting of Nginx, MariaDB, and PHP) using Docker and Docker-Compose while ensuring compliance with predefined guidelines specified in the subject.

In this README, you'll find a pseudo-step-by-step guide. 

- [Subject](https://github.com/jotavare/inception/blob/main/subject/en_subject_inception.pdf) `PDF`
- [References](https://github.com/jotavare/42-resources?tab=readme-ov-file#05-inception) `GitHub`

## DOWNLOAD
- [VirtualBox](https://www.virtualbox.org/) `Website`
- [Debian](https://www.debian.org/) `Website`

## CREATE A NEW VIRTUAL MACHINE
#### Name and Operating System
|                |                                     |
| -------------- | ----------------------------------- |
| Name           | `inception`                         |
| Machine Folder | `/home/<intra_user>/VirtualBox VMs` |
| Type           | `Linux`                             |
| Version        | `Debian (64-bit)`                   |

#### Memory Size
- [x] `1024 MB` (4-8 GB RAM) or `4096 MB` (16 GB RAM or above)

#### Hard Disk
- [ ] Do not add a virtual hard disk
- [x] Create a virtual hard disk now
- [ ] Use an existing virtual hard disk file

#### Hard Disk File Type
- [x] VDI (VirtualBox Disk Image)
- [ ] VHD (Virtual Hard Disk)
- [ ] VMDK (Virtual Machine Disk)

#### Storage on Physical Hard Disk
- [x] Dynamically allocated
- [ ] Fixed size

#### File Location and Size
- [x] `/home/jotavare/VirtualBox VMs/Inception/Inception.vdi`
- [x] `8,00 GB`

#### Choose a Disk File
- [x] `Settings` > `Storage` > Click on `Empty`
- [x] Click on disk icon > `Choose a disk file...` > Insert `debian.iso` file

> [!NOTE]
> If needed, you can add more processor cores to the virtual machine: `Settings` > `System` > `Processor`.

## INSTALL DEBIAN OS
#### Commands
|         |         |
| ------- | ------- |
| `TAB`   | Move    |
| `Space` | Select  |
| `Enter` | Confirm |

#### Debian GNU/Linux Installer Menu (BIOS mode)
- [ ] `Graphic Install`
- [x] `Install`
- [ ] `Advanced Options`
- [ ] `Accessible Dark Contrast Installer Menu`
- [ ] `Help`
- [ ] `Install with Speech Synthesis`

#### Select a Language
- [x] `English`

#### Select Your Location
- [x] `Other` > `Europe` > `Portugal`

#### Configure Locales
- [x] `United States`

#### Configure the Keyboard
- [x] `American English`

#### Configure the Network
|             |             |
| ----------- | ----------- |
| Hostname    | `inception` |
| Domain Name | `<empty>`   |

#### Set Up Users and Passwords
|                                    |                |
| ---------------------------------- | -------------- |
| Root Password                      | `<password>`   |
| Full Name for the New User         | `<intra_user>` |
| Username for Your Account          | `<intra_user>` |
| Choose a Password for the New User | `<password>`   |

#### Configure the Clock
- [x] `Lisbon`
- [ ] `Madeira Islands`
- [ ] `Azores`

#### Partition Method
- [x] `Guided - Use entire disk`
- [ ] `Guided - Use entire disk and set up LVM`
- [ ] `Guided - Use entire disk and set up encrypted LVM`
- [ ] `Manual`

#### Select Disk to Partition
- [x] `SCSI3 (0,0,0) (sda) - 8.6 GB ATA VBOX HARDISK`

#### Partition Scheme
- [x] `All files in one partition (recommended for new users)`

#### Partition Disks
- [x] `Finish partitioning and write changes to disk`
- [x] Write the changes to disks? `Yes`

#### Configure the Package Manager
- [x] Scan extra installation media? `No`
- [x] `Portugal`
- [x] `deb.debian.org`
- [x] HTTP proxy information (blank for none): `<empty>` `Continue`

#### Configure Popularity-Contest
- [x] Participate in the package usage survey? `No`

#### Software Selection
- [x] Select only `SSH server`

#### Install the GRUB Boot Loader
- [x] Install the GRUB boot loader to your primary drive? `Yes`

#### Configuring grub-pc
- [ ] Enter device manually
- [x] `/dev/sda (ata-VBOX_HARDISK_VB2e44d73e-45a0c522)`

#### Finish the Installation and Reboot
- [x] `Continue`

## SAVE THE CONFIGURATION
#### Create Snapshot
- Open the VirtualBox;
- `Left Click` on top of the right icon of your VM;
- Click on `Snapshots`;
- Click on `Take`;
- Write a name for future reference;

#### Save on Cloud
- Go to the VirtualBox folder and compress the `inception` folder;
- Also you can use the `Export` function in VirtualBox;
- Upload to the internet, usually 1-2 GB;

#### Open on a Different PC
- Find the main folder of VirtualBox virtual machines;
- Copy and uncompress the files inside the folder;
- Open VirtualBox and everything should appear correctly;

## INSTALL NECESSARY SOFTWARE
|                        |                                                                                      |
| ---------------------- | ------------------------------------------------------------------------------------ |
| inception login        | `root`                                                                               |
| Password               | `<insert_password>`                                                                  |
| Update repository list | `apt update`                                                                         |
| Install necessary apps | `apt install -y sudo ufw docker docker-compose make openbox xinit kitty firefox-esr` |
| Run GUI                | `startx`                                                                             |
| Test Firefox           | `Right Click` > `Applications` > `Internet` > `Firefox ESR`                          |
| Test terminal          | `Right Click` > `Applications` > `System` > `kitty`                                  |
| Close GUI              | `Right Click` > `Exit`                                                               |

> [!TIP]
> Don't forget to take a snapshot and save it in the cloud.

## PORT FORWARDING
#### Configure SSH
|                                           |                                                                |
| ----------------------------------------- | -------------------------------------------------------------- |
| Edit sshd_config file                     | `nano /etc/ssh/sshd_config`                                    |
| Change ssh port to 4242                   | `#Port 22` to `Port 4242`                                      |
| Enable root login                         | `#PermitRootLogin prohibit-password` to `PermitRootLogin yes`  |
| Enable password authentication (Optional) | `#PasswordAuthentication yes` to `PasswordAuthentication yes`  |
| Save and exit sshd_config file            | `Ctrl + X` > `Y` > `Enter`                                     |

#### Restart Services
|                   |                            |
| ----------------- | -------------------------- |
| Restart ssh       | `service ssh restart`      |
| Restart sshd      | `service sshd restart`     |
| Check SSH status  | `service ssh status`       |

#### Configure Firewall
|                          |                                  |
| ------------------------ | -------------------------------- |
| Check status             | `ufw status`                     |
| Enable ufw               | `ufw enable`                     |
| Open port 4242 (ssh)     | `ufw allow 4242`                 | 
| Open port 80 (http)      | `ufw allow 80`                   |
| Open port 443 (https)    | `ufw allow 443`                  |
| Close virtual machine    | `shutdown now`                   |

#### Port Forwarding
| Name    | Protocol | Host IP     | Host Port    | Guest IP    | Guest Port   |
| ------- | -------- | ----------- | ------------ | ----------- | ------------ |
| `ssh`   | `TCP`    | `127.0.0.1` | `4242`       | `10.0.2.15` | `4242`       |
| `http`  | `TCP`    | `<empty>` | `80`         | `<empty>` | `80`         |
| `https` | `TCP`    | `<empty>` | `443`        | `<empty>` | `443`        |

#### Login with the OS terminal
|                                        |                                      |
| -------------------------------------- | ------------------------------------ |
| Start VM and login with ssh on host pc | `ssh root@localhost -p 4242`         |
| Check the ip adress                    | `ip a` or `hostname -I`              |
| Check for known ssh hosts              | `cat ~/.ssh/known_hosts`             |
| Display socket information             | `ss -tunlp`                          |

> [!TIP]
> Don't forget to take a snapshot and save it in the cloud.

## PRE CONFIGURE DOCKER
#### Sudo Configuration
|                                            |                                                  |
| ------------------------------------------ | ------------------------------------------------ |
| Open sudoers file                          | `nano /etc/sudoers`                              |
| Under `# User privilege specification`     | Add `<intra_user> ALL=(ALL:ALL) ALL`             |
| Save and exit                              | `Ctrl + X` > `Y` > `Enter`                       |

#### Add User to Docker Group
|                                  |                                                  |
| -------------------------------- | ------------------------------------------------ |
| Add user to docker group         | `sudo usermod -aG docker <intra_user>`           |
| Check user groups                | `groups <intra_user>`                            |

#### Test Configuration
|                                   |                                                                         |
| --------------------------------- | ----------------------------------------------------------------------- |
| Switch user                       | `su <intra_user>`                                                       |
| Go to home directory              | `cd ~/`                                                                 |
| Download Docker sample            | `git clone https://github.com/codesshaman/simple_docker_nginx_html.git` |
| Change directory and build Docker | `cd simple_docker_nginx_html/ && docker-compose up -d && cd ~/`         |  
| Open browser and write in the URL | `172.0.0.1` (NAT) or `<vm_ip_adress>` (Bridged Adapter)                 |
| Verify website                    | It should display `My html config is work!`                             |

#### Create Project Directories and Files
|                                  |                                                  |
| -------------------------------- | ------------------------------------------------ |
| Create .sh file                  | `nano make_inception.sh`                         |
| Copy and past the bash code      | *(Paste the provided bash code bellow)*          |
| Save and exit                    | `Ctrl + X` > `Y` > `Enter`                       |
| Give permissions to file         | `chmod 777 make_inception.sh`                    |
| Run .sh file                     | `./make_inception.sh`                            |

> [!WARNING]
> Change `<intra_user>` to your username. There are three instances. `CTRL + \` to search and replace.
```sh
#!/bin/bash
mkdir project
mkdir project/srcs
touch project/Makefile
mkdir project/srcs/requirements
touch project/srcs/docker-compose.yml
touch project/srcs/.env
echo "DOMAIN_NAME=<intra_user>.42.fr" > project/srcs/.env
echo "CERT_=./requirements/tools/<intra_user>.42.fr.crt" >> project/srcs/.env
echo "KEY_=./requirements/tools/<intra_user>.42.fr.key" >> project/srcs/.env
echo "DB_NAME=wordpress" >> project/srcs/.env
echo "DB_ROOT=rootpass" >> project/srcs/.env
echo "DB_USER=wpuser" >> project/srcs/.env
echo "DB_PASS=wppass" >> project/srcs/.env
mkdir project/srcs/requirements/bonus
mkdir project/srcs/requirements/mariadb
mkdir project/srcs/requirements/mariadb/conf
touch project/srcs/requirements/mariadb/conf/create_db.sh
mkdir project/srcs/requirements/mariadb/tools
echo "" > project/srcs/requirements/mariadb/tools/.gitkeep
touch project/srcs/requirements/mariadb/Dockerfile
touch project/srcs/requirements/mariadb/.dockerignore
echo ".git" > project/srcs/requirements/mariadb/.dockerignore
echo ".env" >> project/srcs/requirements/mariadb/.dockerignore
mkdir project/srcs/requirements/nginx
mkdir project/srcs/requirements/nginx/conf
touch project/srcs/requirements/nginx/conf/nginx.conf
mkdir project/srcs/requirements/nginx/tools
touch project/srcs/requirements/nginx/Dockerfile
echo ".git" > project/srcs/requirements/mariadb/.dockerignore
echo ".env" >> project/srcs/requirements/mariadb/.dockerignore
mkdir project/srcs/requirements/tools
mkdir project/srcs/requirements/wordpress
mkdir project/srcs/requirements/wordpress/conf
touch project/srcs/requirements/wordpress/conf/wp-config-create.sh
mkdir project/srcs/requirements/wordpress/tools
echo "" > project/srcs/requirements/wordpress/tools/.gitkeep
touch project/srcs/requirements/wordpress/Dockerfile
touch project/srcs/requirements/wordpress/.dockerignore
echo ".git" > project/srcs/requirements/wordpress/.dockerignore
echo ".env" >> project/srcs/requirements/wordpress/.dockerignore
```

> [!TIP]
> Don't forget to take a snapshot and save it in the cloud.

## CHANGE DOMAIN AND INSTALL CERTIFICATES
#### Install mkcert
| Step                                      | Command                                         |
|-------------------------------------------|-------------------------------------------------|
| Update list of repositories               | `sudo apt update -y`                            |
| Install utilities for mkcert              | `sudo apt install -y wget curl libnss3-tools`   |
| Download mkcert binary                    | *(Copy and paste the command bellow)*           |
| Rename the binary                         | `mv mkcert-v*-linux-amd64 mkcert`               |
| Give all permissions                      | `chmod 777 mkcert`                              |
| Move mkcert to bin directory              | `sudo mv mkcert /usr/local/bin/`                |
| Check mkcert version                      | `mkcert --version`                              |

```
curl -s https://api.github.com/repos/FiloSottile/mkcert/releases/latest| grep browser_download_url  | grep linux-amd64 | cut -d '"' -f 4 | wget -qi -
```

#### Change Local Domain
|                                      |                                                                          |
| ------------------------------------ | ------------------------------------------------------------------------ |
| Edit hosts file                      | `sudo nano /etc/hosts`                                                   |
| NAT configuration                    | Change `127.0.0.1 localhost` to `127.0.0.1 <intra_user>.42.fr localhost` |
| Bridged Adapter configuration        | Add `<vm_ip_address> <intra_user>.42.fr`                                 |
| Start Docker                         | `cd ~/simple_docker_nginx_html/ && docker-compose up -d && cd ~/`        |
| Start GUI                            | `sudo startx`                                                            |
| Open Firefox in VM                   | `Right Click` > `Open Firefox`                                           |
| Type the following URL               | `http://<intra_user>.42.fr`                                              |

#### Create a Certificate
|                                |                                                        |
| ------------------------------ | ------------------------------------------------------ |
| Change directory               | `cd ~/project/srcs/requirements/tools/`                |
| Obtain certificate             | `mkcert <intra_user>.42.fr`                            |
| Change extension name          | `mv <intra_user>.42.fr-key.pem <intra_user>.42.fr.key` |
| Change extension name          | `mv <intra_user>.42.fr.pem <intra_user>.42.fr.crt`     |

#### Reconfigure Docker NGINX File
|                                |                                                           |
| ------------------------------ | --------------------------------------------------------- |
| Edit NGINX configuration       | `nano ~/simple_docker_nginx_html/nginx/conf.d/nginx.conf` |
| Paste configuration code       | *(Copy and paste the provided configuration code bellow)* |

> [!WARNING]
> Change `<intra_user>` to your username. There are three instances. `CTRL + \` to search and replace.
```bash
server {
    # Listen on port http
    listen      80;
    # Listen on port https - ssl
    listen      443 ssl;
    # Set the domain we will work on:
    server_name  <intra_user>.42.fr <intra_user>.42.fr;
    # Specify the root directory of the project:
    root    /var/www/public/html;
    # The next section is commented out for
    # normal operation with the host machine.
    # Redirect from http to https:
    #if ($scheme = 'http') {
    #    return 301 https://<intra_user>.42.fr$request_uri;
    #}
    # Specify the path to the certificate and key:
    ssl_certificate     /etc/nginx/ssl/<intra_user>.42.fr.crt;
    ssl_certificate_key /etc/nginx/ssl/<intra_user>.42.fr.key;
    # Specify supported tls protocols:
    ssl_protocols            TLSv1.2 TLSv1.3;
    # Specify caching options and timeouts:
    ssl_session_timeout 10m;
    keepalive_timeout 70;
    # Tell the server which file extension
    # to look for in our root folder:
    location / {
        try_files $uri /index.html;
    }
}
```

#### Reconfigure Docker YML File
|                                |                                                                      |
| ------------------------------ | -------------------------------------------------------------------- |
| Stop Docker                    | `cd ~/simple_docker_nginx_html/ && docker-compose down && cd ~/`     |
| Edit Docker YML File           | `cd ~/simple_docker_nginx_html/ && nano docker-compose.yml && cd ~/` |
| In the volume section add      | `/home/${USER}/project/srcs/requirements/tools:/etc/nginx/ssl`       |
| In the ports section add       | `"443:443"`                                                          |

#### Run Project Via HTTPS With GUI
|                                |                                                                   |
| ------------------------------ | ----------------------------------------------------------------- |
| Start Docker                   | `cd ~/simple_docker_nginx_html/ && docker-compose up -d && cd ~/` |
| Start GUI                      | `sudo startx`                                                     |
| Open Firefox in VM             | Check the browser for self-signed certificate                     |
| Type the following URL         | `<intra_user>.42.fr` or `127.0.0.1` or `<vm_ip_adress>`           |

## MAKEFILE

|                                   |                                                                   |
| --------------------------------- | ----------------------------------------------------------------- |
| Create Makefile                   | `nano ~/simple_docker_nginx_html/Makefile`                        |
| Copy and paste the Makefile rules | *(Copy and paste the provided configuration code bellow)*         |

```bash
name = simple_nginx_html

all:
        @printf "Running the configuration ${name}...\n"
        @docker-compose -f ./docker-compose.yml up -d

build:
        @printf "Assembling the configuration ${name}...\n"
        @docker-compose -f ./docker-compose.yml up -d --build

down:
        @printf "Stopping the configuration ${name}...\n"
        @docker-compose -f ./docker-compose.yml down

re:
        @printf "Rebuilding the configuration ${name}...\n"
        @docker-compose -f ./docker-compose.yml up -d --build

clean: down
        @printf "Cleaning the configuration ${name}...\n"
        @docker system prune -a

fclean:
        @printf "Complete cleanup of all docker configurations...\n"
        @docker stop $$(docker ps -qa)
        @docker system prune --all --force --volumes
        @docker network prune --force
        @docker volume prune --force

.PHONY: all build down re clean clean
```

## CREATING AN NGINX CONTAINER
#### Software Used
|            |                                        |      |
| ---------- | -------------------------------------- |----- |
| Nginx      | Proxying Web Server                    | 443  |
| PHP        | Scripting language for the web         | -    |
| Php-Fpm    | A set of libraries for the FastCGI API | 9000 |
| WordPress  | Content Management System              | -    |
| MariaDB    | Relational Database                    | 3306 |

#### Create a Dockerfile
|                               |                                                            |
| ----------------------------- |----------------------------------------------------------- |
| Go to the folder of our nginx | `cd ~/project/srcs/requirements/nginx/`                    |
| Create a Dockerfile in it     | `nano Dockerfile`                                          |
| Copy and paste                | (copy and paste the code below)                            |
| Check latest alpine version   | Visit [Alpine Linux website](https://www.alpinelinux.org/) |

```bash
FROM	alpine:3.16
RUN	apk update && apk upgrade && apk add --no-cache nginx
EXPOSE	443
CMD	["nginx", "-g", "daemon off;"]
```

#### Create a Configuration File
|                                                 |                                                                                   |
| ----------------------------------------------- | --------------------------------------------------------------------------------- |
| Create our config file `nginx.conf`             | `nano conf/nginx.conf`                                                            |
| Copy and paste                                  | *(copy and paste the code below)*                                                 |
| Copy certificate keys to the nginx tools folder | `cp ~/project/srcs/requirements/tools/* ~/project/srcs/requirements/nginx/tools/` |

```bash
server {
    listen      443 ssl;
    server_name  <intra_user>.42.fr www.<intra_user>.42.fr;
    root    /var/www/;
    index index.php index.html;
    ssl_certificate     /etc/nginx/ssl/<intra_user>.42.fr.crt;
    ssl_certificate_key /etc/nginx/ssl/<intra_user>.42.fr.key;
    ssl_protocols       TLSv1.2 TLSv1.3;
    ssl_session_timeout 10m;
    keepalive_timeout 70;
    location / {
        try_files $uri /index.php?$args /index.html;
        add_header Last-Modified $date_gmt;
        add_header Cache-Control 'no-store, no-cache';
        if_modified_since off;
        expires off;
        etag off;
    }
#    location ~ \.php$ {
#        fastcgi_split_path_info ^(.+\.php)(/.+)$;
#        fastcgi_pass wordpress:9000;
#        fastcgi_index index.php;
#        include fastcgi_params;
#        fastcgi_param SCRIPT_FILENAME $document_root$fastcgi_script_name;
#        fastcgi_param PATH_INFO $fastcgi_path_info;
#    }
}
```

#### Creating a docker-compose Configuration
|                                 |                                                          |
| ------------------------------- |--------------------------------------------------------- |
| Open `docker-compose.yml`       | `cd ../../ && nano docker-compose.yml`                   |
| Copy and paste                  | *(Copy and paste the code below)*                        |
| Turn off test configuration     | `cd ~/simple_docker_nginx_html/ && docker-compose down`  |
| Launch the new configuration    | `cd ~/project/srcs/ && docker-compose up -d`             |
| Access via HTTPS                | `https://127.0.0.1` in the browser                       |
|                                 | `https://<intra_user>.42.fr` in the GUI                  |

```bash
version: '3'

services:
  nginx:
    build:
      context: .
      dockerfile: requirements/nginx/Dockerfile
    container_name: nginx
#    depends_on:
#      - wordpress
    ports:
      - "443:443"
    volumes:
      - ./requirements/nginx/conf/:/etc/nginx/http.d/
      - ./requirements/nginx/tools:/etc/nginx/ssl/
      - /home/${USER}/simple_docker_nginx_html/public/html:/var/www/
    restart: always
```

## CONTRIBUTING

If you find any issues or have suggestions for improvements, feel free to fork the repository and open an issue or submit a pull request.

## LICENSE

This project is available under the MIT License. For further details, please refer to the [LICENSE](https://github.com/jotavare/inception/blob/master/LICENSE) file.
