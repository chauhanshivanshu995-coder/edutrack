# EduTrack (C++) — Course Feedback & Analytics (Prototype)

Minimal, assignment-ready C++ version aligned to the SRS Lite.

## Features
- Student login and **submit feedback** with rating validation (1–5)
- View **eligible courses** (all courses eligible in prototype)
- Faculty can view **average ratings** and **anonymous comments**
- Admin can view **all feedback entries**
- In-memory repositories (std::vector / std::unordered_map)

## Build (CMake)
```bash
mkdir build && cd build
cmake ..
cmake --build .
```

## Run
```bash
./edutrack_app
```

## Tests (no external frameworks; uses `assert`)
```bash
./edutrack_tests
```

## Structure
```
include/edutrack/
  domain/   # entities
  repos/    # in-memory repositories
  services/ # business logic
src/        # app sources
tests/      # simple assert-based tests
uml/        # PlantUML & Mermaid
```
