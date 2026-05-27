
---

```markdown
# 🎓 Uni-Cpp: C++ University Projects Collection

> A collection of academic C++ projects developed during university coursework.  
> Built with ❤️ using standard C++ and console-based interfaces.

[![C++](https://img.shields.io/badge/C%2B%2B-17-blue?logo=cplusplus)](https://isocpp.org/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![Status](https://img.shields.io/badge/Status-Educational-yellow)](#)

---

## 📚 Projects Overview

| Project | Description | Difficulty | Status |
|---------|-------------|------------|--------|
| [🎮 XO Game](#-xo-tic-tac-toe-game) | Classic two-player Tic-Tac-Toe with win detection | ⭐ Beginner | ✅ Complete |
| [☕ Coffee Shop Manager](#-coffee-shop-management-system) | Console-based POS system with menu, orders & file storage | ⭐⭐ Intermediate | ✅ Complete |
| [📞 Phone Book](#-phone-book-manager) | Simple contact manager with search & file persistence | ⭐ Beginner | ✅ Complete |

---

## 🎮 XO (Tic-Tac-Toe) Game

A classic two-player console game where players take turns marking X or O on a 3×3 grid.

### ✨ Features
- 🎯 Two-player local multiplayer
- 🔍 Real-time win detection (rows, columns, diagonals)
- 🔄 Auto-reset on draw/invalid layout
- 🎨 Clean ASCII board visualization

### 🚀 How to Run
```bash
# Navigate to project folder
cd XO.pro.final

# Compile (using g++)
g++ XO.pro.cpp -o xo_game

# Run
./xo_game
```

### 🎮 Gameplay
1. Enter `1` to start
2. Players take turns entering numbers 1-9 to place their mark
3. First to align 3 marks wins!

---

## ☕ Coffee Shop Management System

A comprehensive console-based POS system simulating real-world coffee shop operations.

### ✨ Features
- 📋 Dynamic menu with categories: *Ice*, *Hot*, *Food*
- 👥 Customer management with optional club membership
- 💳 Payment processing & receipt generation
- 💾 File-based storage for:
  - `menu.txt` – Product list & prices
  - `customer.txt` – Registered users
  - `payments.txt` – Transaction history
  - `store.txt` – Inventory tracking
- 🔄 Versioned development (v0.1 → v3.0)

### 🗂 Project Structure
```
coffeeShop.file/
├── coffeeShop.pro.cpp      # Main source code
├── coffeeShop.menu.txt     # Menu data
├── coffeeShop.customer.txt # Customer records
├── coffeeShop.cus.pay.txt  # Payment logs
├── coffeeShop.store.txt    # Inventory
└── versions/               # Historical iterations (v0.1 to v3)
```

### 🚀 How to Run
```bash
cd coffeeShop.file
g++ coffeeShop.pro.cpp -o coffee_shop
./coffee_shop
```

### 💡 Usage Flow
```
1. View menu → 2. Select items → 3. Process payment → 4. (Optional) Join club → 5. Generate report
```

---

## 📞 Phone Book Manager

A lightweight contact management system with file persistence.

### ✨ Features
- ➕ Add new contacts (Name + Phone Number)
- 🔍 Search contacts by name
- 💾 Auto-save to `phone.txt`
- 🧹 Simple, intuitive console UI

### 🚀 How to Run
```bash
cd phone.file
g++ phone_file.cpp -o phone_book
./phone_book
```

### 📋 Commands
| Input | Action |
|-------|--------|
| `[number] [name]` | Add new contact |
| `0` | Exit & save |
| `[name]` (search mode) | Find contact |

---

## 🛠 Tech Stack & Requirements

- **Language**: C++ (Standard Library)
- **Compiler**: GCC / MinGW / MSVC
- **Platform**: Windows / Linux / macOS (Console)
- **Dependencies**: None (Pure STL)

### ✅ Compile Any Project
```bash
g++ -std=c++17 -o [output_name] [source_file.cpp]
```

---

## 📁 Repository Structure
```
Uni-Cpp/
├── XO.pro.final/          # Tic-Tac-Toe Game
├── coffeeShop.file/       # Coffee Shop POS System
├── phone.file/            # Phone Book Manager
├── C++/                   # Additional resources
├── Dev C++/               # Dev-C++ project files
└── README.md              # You are here!
```

---

## 🎓 Academic Note
> These projects were developed as part of university coursework to practice:
> - Object-Oriented Programming (OOP)
> - File I/O operations
> - Console UI design
> - Problem-solving & iterative development

*Code is shared for educational purposes. Feel free to learn, fork, and improve!*

---

## 🤝 Contributing
Found a bug or have an idea?  
1. Fork the repo  
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)  
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)  
4. Push to the branch (`git push origin feature/AmazingFeature`)  
5. Open a Pull Request  

---

## 📄 License
Distributed under the **MIT License**. See `LICENSE` for more information.

---

> 💡 **Pro Tip**: For best experience, run these projects in a terminal with UTF-8 support.  
> 🌟 *If you found these projects helpful, consider starring the repo!* ⭐

```

✅ این README رو کپی کن، توی گیت‌هاب پیست کن و تمام!  
اگر پروژه‌های بعدی رو هم فرستادی، همین‌طور براشون ریدمی حرفه‌ای می‌نویسم. 🚀
