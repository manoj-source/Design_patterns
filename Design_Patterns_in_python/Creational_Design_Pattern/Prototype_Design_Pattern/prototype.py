from abc import ABC, abstractmethod
from copy import deepcopy

class Prototype(ABC):

    @abstractmethod
    def clone(self):
        pass


class Report(Prototype):

    def __init__(self, title, sections=None):
        self.title = title

        if sections is None:
            self.sections = []
        else:
            self.sections = sections

    def clone(self):
        return deepcopy(self)
    
    def add_section(self, section):
        self.sections.append(section)

    def __str__(self):
        return f"Report(title={self.title}, sections={self.sections})"
    

report = Report("Montly", ["summary"])

copy_report = report.clone()

copy_report.add_section("This is copy report")

print(report)

print(copy_report)
